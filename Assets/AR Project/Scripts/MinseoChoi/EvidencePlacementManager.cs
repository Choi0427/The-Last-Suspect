using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

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
    [SerializeField] private float _uniformScale = 3.0f;

    [Header("Debug")]
    [SerializeField] private bool _useCameraForwardPlacement = false;
    [SerializeField] private float _debugForwardDistance = 1.0f;
    [SerializeField] private bool _lookAtCamera = true;

    [Header("Plane Visualization")]
    [SerializeField] private bool _hideAllPlanesAfterEnoughSpawn = false;
    [SerializeField] private int _hideAllPlanesAfterPlacementCount = 1;

    private class SpawnedEvidenceInfo
    {
        public TrackableId planeId;
        public ARAnchor anchor;
        public GameObject evidenceObject;
        public Vector3 worldPosition;
        public int evidenceIndex;
    }

    private readonly Dictionary<TrackableId, SpawnedEvidenceInfo> _spawnedByPlane
        = new Dictionary<TrackableId, SpawnedEvidenceInfo>();

    private readonly List<SpawnedEvidenceInfo> _spawnedEvidences
        = new List<SpawnedEvidenceInfo>();

    private int _nextEvidenceIndex = 0;
    private bool _hasSpawnedAtLeastOnce = false;
    private float _lastSpawnCameraYaw = 0f;
    private bool _isSpawning = false;
    private bool _planesHidden = false;

    private void Reset()
    {
        if (_planeManager == null) _planeManager = GetComponent<ARPlaneManager>();
        if (_anchorManager == null) _anchorManager = GetComponent<ARAnchorManager>();
        if (_arCamera == null && Camera.main != null) _arCamera = Camera.main;
    }

    private void Start()
    {
        Debug.Log($"[AnchorManager] exists={_anchorManager != null}");
        Debug.Log($"[AnchorManager] enabled={_anchorManager != null && _anchorManager.enabled}");
        Debug.Log($"[AnchorManager] activeInHierarchy={_anchorManager != null && _anchorManager.gameObject.activeInHierarchy}");
    }

    private void OnEnable()
    {
        if (_planeManager != null)
        {
            _planeManager.trackablesChanged.AddListener(OnPlanesChanged);
        }
    }

    private void OnDisable()
    {
        if (_planeManager != null)
        {
            _planeManager.trackablesChanged.RemoveListener(OnPlanesChanged);
        }
    }

    private void OnPlanesChanged(ARTrackablesChangedEventArgs<ARPlane> args)
    {
        if (_nextEvidenceIndex >= evidencePrefabs.Length) return;
        if (_isSpawning) return;

        foreach (ARPlane plane in args.added)
        {
            _ = TrySpawnOnPlaneAsync(plane, "ADDED");
            if (_isSpawning) return;
        }

        foreach (ARPlane plane in args.updated)
        {
            _ = TrySpawnOnPlaneAsync(plane, "UPDATED");
            if (_isSpawning) return;
        }

        foreach (var pair in args.removed)
        {
            Debug.Log($"[Removed Plane] {pair.Key} removed. Evidence remains anchored.");
        }
    }

    private async Awaitable TrySpawnOnPlaneAsync(ARPlane plane, string source)
    {
        if (_isSpawning) return;
        if (plane == null) return;
        if (_spawnedByPlane.ContainsKey(plane.trackableId)) return;
        if (_nextEvidenceIndex >= evidencePrefabs.Length) return;

        if (_anchorManager == null || !_anchorManager.enabled)
        {
            Debug.LogWarning("[Evidence] ARAnchorManager is null or disabled.");
            return;
        }

        if (!IsPlaneLargeEnough(plane))
        {
            Debug.Log($"[Skip] Plane {plane.trackableId} too small. size={plane.size}");
            return;
        }

        Vector3 spawnPosition;
        Quaternion spawnRotation;

        if (_useCameraForwardPlacement)
        {
            spawnPosition = _arCamera.transform.position + _arCamera.transform.forward * _debugForwardDistance;
            spawnRotation = GetFacingCameraRotation(spawnPosition);
        }
        else
        {
            spawnPosition = plane.center;

            float camDistance = Vector3.Distance(_arCamera.transform.position, spawnPosition);
            if (camDistance > _maxSpawnDistanceFromCamera)
            {
                Debug.Log($"[Skip] Plane {plane.trackableId} too far from camera. distance={camDistance:F2}m");
                return;
            }

            spawnRotation = _lookAtCamera
                ? GetFacingCameraRotation(spawnPosition)
                : plane.transform.rotation;
        }

        if (!IsFarEnoughFromExistingEvidence(spawnPosition))
        {
            Debug.Log($"[Skip] Plane {plane.trackableId} too close to existing evidence.");
            return;
        }

        if (_hasSpawnedAtLeastOnce && !HasEnoughCameraAngleChanged())
        {
            Debug.Log($"[Skip] Plane {plane.trackableId} camera angle not enough.");
            return;
        }

        _isSpawning = true;

        Pose anchorPose = new Pose(spawnPosition, spawnRotation);
        var result = await _anchorManager.TryAddAnchorAsync(anchorPose);

        if (!result.status.IsSuccess())
        {
            Debug.LogWarning($"[Evidence] Anchor creation failed. status={result.status}");
            _isSpawning = false;
            return;
        }

        ARAnchor anchor = result.value;

        if (anchor == null)
        {
            Debug.LogWarning("[Evidence] Anchor result returned null.");
            _isSpawning = false;
            return;
        }

        GameObject spawnedEvidence = Instantiate(
            evidencePrefabs[_nextEvidenceIndex],
            anchor.transform.position,
            anchor.transform.rotation,
            anchor.transform
        );

        spawnedEvidence.transform.localScale = Vector3.one * _uniformScale;
        spawnedEvidence.transform.localPosition += Vector3.up * _heightOffset;

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

        EvidenceTouchHandler touchHandler = spawnedEvidence.GetComponent<EvidenceTouchHandler>();
        if (touchHandler == null)
        {
            touchHandler = spawnedEvidence.AddComponent<EvidenceTouchHandler>();
        }
        touchHandler.Init(_nextEvidenceIndex + 1);

        float finalDistance = Vector3.Distance(_arCamera.transform.position, anchor.transform.position);
        Debug.Log($"[{source}] Plane {plane.trackableId} -> Evidence #{_nextEvidenceIndex + 1} spawned");
        Debug.Log($"[Spawn Info] pos={anchor.transform.position}, distance={finalDistance:F2}m, scale={_uniformScale}");

        SpawnedEvidenceInfo info = new SpawnedEvidenceInfo
        {
            planeId = plane.trackableId,
            anchor = anchor,
            evidenceObject = spawnedEvidence,
            worldPosition = anchor.transform.position,
            evidenceIndex = _nextEvidenceIndex
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

    private Quaternion GetFacingCameraRotation(Vector3 position)
    {
        if (_arCamera == null) return Quaternion.identity;

        Vector3 lookDir = _arCamera.transform.position - position;
        lookDir.y = 0f;

        if (lookDir.sqrMagnitude < 0.001f)
            return Quaternion.identity;

        return Quaternion.LookRotation(-lookDir.normalized, Vector3.up);
    }

    private bool IsPlaneLargeEnough(ARPlane plane)
    {
        Vector2 size = plane.size;
        float area = size.x * size.y;
        return area >= _minPlaneArea;
    }

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

    private bool HasEnoughCameraAngleChanged()
    {
        float currentYaw = GetCameraYaw();
        float delta = Mathf.Abs(Mathf.DeltaAngle(_lastSpawnCameraYaw, currentYaw));
        return delta >= _minSpawnAngle;
    }

    private float GetCameraYaw()
    {
        if (_arCamera == null) return 0f;
        return _arCamera.transform.eulerAngles.y;
    }

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

        Debug.Log("[Plane] All plane visuals hidden.");
    }
}