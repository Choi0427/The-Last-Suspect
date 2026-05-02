using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

// Manages the automatic placement of evidence objects on detected AR planes.
// This script spawns evidence prefabs one by one when AR planes are detected,
// ensuring proper spacing, camera distance, and plane size requirements.
public class EvidencePlacementManager : MonoBehaviour
{
    [Header("AR References")]
    [SerializeField] private ARPlaneManager _planeManager;
    [SerializeField] private ARAnchorManager _anchorManager;
    [SerializeField] private Camera _arCamera;

    [Header("Evidence Prefabs")]
    [SerializeField] private GameObject[] evidencePrefabs;

    [Header("Spawn Rules")]
    [SerializeField] private float _minSpawnDistance = 1.0f;
    [SerializeField] private float _minSpawnAngle = 0f;
    [SerializeField] private float _minPlaneArea = 0.05f;
    [SerializeField] private float _maxSpawnDistanceFromCamera = 2.5f;

    [Header("Placement Offset")]
    [SerializeField] private float _heightOffset = 0.03f;
    [SerializeField] private float _uniformScale = 1.0f;

    [Header("Plane Visualization")]
    [SerializeField] private bool _hideAllPlanesAfterEnoughSpawn = false;
    [SerializeField] private int _hideAllPlanesAfterPlacementCount = 1;

    [Header("Evidence Metadata")]
    [SerializeField] private ToolManager.ToolType[] requiredTools;
    [SerializeField] private string[] evidenceNames;

    // Stores information about each spawned evidence object.
    // Tracks which plane it was spawned on, its anchor, and position.
    private class SpawnedEvidenceInfo
    {
        public TrackableId planeId;
        public ARAnchor anchor;
        public GameObject evidenceObject;
        public Vector3 worldPosition;
    }

    // Dictionary to track which evidence was spawned on which plane.
    private readonly Dictionary<TrackableId, SpawnedEvidenceInfo> _spawnedByPlane
        = new Dictionary<TrackableId, SpawnedEvidenceInfo>();

    // List of all spawned evidence objects.
    private readonly List<SpawnedEvidenceInfo> _spawnedEvidences
        = new List<SpawnedEvidenceInfo>();

    private int _nextEvidenceIndex = 0;
    private bool _hasSpawnedAtLeastOnce = false;
    private float _lastSpawnCameraYaw = 0f;
    private bool _isSpawning = false;
    private bool _planesHidden = false;

    // Auto assigns AR components if not set when component is reset in editor.
    private void Reset()
    {
        if (_planeManager == null) _planeManager = GetComponent<ARPlaneManager>();
        if (_anchorManager == null) _anchorManager = GetComponent<ARAnchorManager>();
        if (_arCamera == null && Camera.main != null) _arCamera = Camera.main;
    }

    // Called when component is enabled. Subscribes to plane detection events.
    private void OnEnable()
    {
        if (_planeManager != null)
        {
            _planeManager.trackablesChanged.AddListener(OnPlanesChanged);
        }
    }

    // Called when component is disabled. Unsubscribes from plane detection events.
    private void OnDisable()
    {
        if (_planeManager != null)
        {
            _planeManager.trackablesChanged.RemoveListener(OnPlanesChanged);
        }
    }

    // Called when AR planes are added or updated.
    // Tries to spawn evidence on new or updated planes.
    private void OnPlanesChanged(ARTrackablesChangedEventArgs<ARPlane> args)
    {
        if (_nextEvidenceIndex >= evidencePrefabs.Length) return;
        if (_isSpawning) return;

        foreach (ARPlane plane in args.added)
        {
            _ = TrySpawnOnPlaneAsync(plane);
            if (_isSpawning) return;
        }

        foreach (ARPlane plane in args.updated)
        {
            _ = TrySpawnOnPlaneAsync(plane);
            if (_isSpawning) return;
        }
    }

    // Attempts to spawn the next evidence object on the given plane.
    // Checks plane size, camera distance, spacing, and camera angle before spawning.
    private async Awaitable TrySpawnOnPlaneAsync(ARPlane plane)
    {
        if (_isSpawning) return;
        if (plane == null) return;
        if (_spawnedByPlane.ContainsKey(plane.trackableId)) return;
        if (_nextEvidenceIndex >= evidencePrefabs.Length) return;

        if (_anchorManager == null || !_anchorManager.enabled)
        {
            return;
        }

        if (!IsPlaneLargeEnough(plane))
        {
            return;
        }

        Vector3 spawnPosition = plane.center;

        float camDistance = Vector3.Distance(_arCamera.transform.position, spawnPosition);
        if (camDistance > _maxSpawnDistanceFromCamera)
        {
            return;
        }

        Quaternion spawnRotation = Quaternion.FromToRotation(Vector3.up, plane.normal);

        if (!IsFarEnoughFromExistingEvidence(spawnPosition))
        {
            return;
        }

        if (_hasSpawnedAtLeastOnce && !HasEnoughCameraAngleChanged())
        {
            return;
        }

        _isSpawning = true;

        Pose anchorPose = new Pose(spawnPosition, spawnRotation);
        var result = await _anchorManager.TryAddAnchorAsync(anchorPose);

        if (!result.status.IsSuccess())
        {
            _isSpawning = false;
            return;
        }

        ARAnchor anchor = result.value;

        if (anchor == null)
        {
            _isSpawning = false;
            return;
        }

        GameObject spawnedEvidence = Instantiate(
            evidencePrefabs[_nextEvidenceIndex],
            anchor.transform.position,
            anchor.transform.rotation,
            anchor.transform
        );

        spawnedEvidence.transform.localScale *= _uniformScale;
        spawnedEvidence.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
        spawnedEvidence.transform.localPosition = Vector3.up * _heightOffset;

        Renderer[] renderers = spawnedEvidence.GetComponentsInChildren<Renderer>(true);
        foreach (Renderer r in renderers)
        {
            r.enabled = true;
        }

        Rigidbody rb = spawnedEvidence.GetComponent<Rigidbody>();
        if (rb != null)
        {
            rb.isKinematic = true;
            rb.useGravity = false;
        }

        SpawnedEvidenceInfo info = new SpawnedEvidenceInfo
        {
            planeId = plane.trackableId,
            anchor = anchor,
            evidenceObject = spawnedEvidence,
            worldPosition = anchor.transform.position,
        };

        _spawnedByPlane.Add(plane.trackableId, info);
        _spawnedEvidences.Add(info);

        _lastSpawnCameraYaw = GetCameraYaw();
        _hasSpawnedAtLeastOnce = true;

        _nextEvidenceIndex++;
        _isSpawning = false;

        if (_hideAllPlanesAfterEnoughSpawn &&
            !_planesHidden &&
            _spawnedEvidences.Count >= _hideAllPlanesAfterPlacementCount)
        {
            HideAllPlaneVisuals();
            _planesHidden = true;
        }
    }

    // Checks if a plane is large enough to spawn evidence on.
    private bool IsPlaneLargeEnough(ARPlane plane)
    {
        Vector2 size = plane.size;
        float area = size.x * size.y;
        return area >= _minPlaneArea;
    }

    // Checks if candidate position is far enough from all existing evidence.
    // Only checks horizontal distance.
    private bool IsFarEnoughFromExistingEvidence(Vector3 candidatePosition)
    {
        Vector2 candidateXZ = new Vector2(candidatePosition.x, candidatePosition.z);

        foreach (var info in _spawnedEvidences)
        {
            if (info == null) continue;

            Vector3 existingPosition = info.evidenceObject != null
                ? info.evidenceObject.transform.position
                : info.worldPosition;

            Vector2 existingXZ = new Vector2(existingPosition.x, existingPosition.z);
            float distance = Vector2.Distance(candidateXZ, existingXZ);

            if (distance < _minSpawnDistance)
            {
                return false;
            }
        }

        return true;
    }

    // Checks if camera has rotated enough since last spawn.
    private bool HasEnoughCameraAngleChanged()
    {
        float currentYaw = GetCameraYaw();
        float delta = Mathf.Abs(Mathf.DeltaAngle(_lastSpawnCameraYaw, currentYaw));
        return delta >= _minSpawnAngle;
    }

    // Gets the current Y rotation of the AR camera.
    private float GetCameraYaw()
    {
        if (_arCamera == null) return 0f;
        return _arCamera.transform.eulerAngles.y;
    }

    // Hides the visual representation of all detected AR planes.
    private void HideAllPlaneVisuals()
    {
        foreach (var plane in _planeManager.trackables)
        {
            MeshRenderer meshRenderer = plane.GetComponent<MeshRenderer>();
            if (meshRenderer != null)
            {
                meshRenderer.enabled = false;
            }

            LineRenderer lineRenderer = plane.GetComponent<LineRenderer>();
            if (lineRenderer != null)
            {
                lineRenderer.enabled = false;
            }
        }
    }
}