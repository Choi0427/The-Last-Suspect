using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class EvidencePlacementManage : MonoBehaviour
{
    [SerializeField] private ARRaycastManager _raycastManager;
    [SerializeField] private ARPlaneManager _planeManager;

    // Inspector???? 5???? ????? Prefab?? ?ò÷?? ????
    [SerializeField] private GameObject[] evidencePrefabs;

    private List<ARRaycastHit> _hits = new List<ARRaycastHit>();

    // PlaneId ?? ??? ????? ????? ???????
    private Dictionary<TrackableId, GameObject> _spawnedOnPlane
        = new Dictionary<TrackableId, GameObject>();

    // ?????? ????? ????? ?¥å???
    private int _nextEvidenceIndex = 0;

    void Update()
    {
        if (Input.touchCount == 0) return;
        Touch touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        if (_raycastManager.Raycast(touch.position, _hits, TrackableType.PlaneWithinPolygon))
        {
            ARRaycastHit hit = _hits[0];
            TrackableId planeId = hit.trackableId;

            // ?? Plane?? ??? ??????? ?????? ???? ?? ??
            if (_spawnedOnPlane.ContainsKey(planeId))
            {
                Debug.Log("?? Plane???? ??? ??????? ??????: " + planeId);
                return;
            }

            // ????? Prefab ?ò÷?? ?? ??????? ???? ???
            if (_nextEvidenceIndex >= evidencePrefabs.Length)
            {
                Debug.Log("??? ??????? ???????????.");
                return;
            }

            // ?? ????? ???? + ??¨¨ ????
            Pose hitPose = hit.pose;
            GameObject spawnedObj = Instantiate(
                evidencePrefabs[_nextEvidenceIndex],
                hitPose.position,
                hitPose.rotation
            );
            spawnedObj.AddComponent<ARAnchor>();

            // EvidenceTouchHandler ??? (Milestone 4??)
            spawnedObj.AddComponent<EvidenceTouchHandler>()
                .Init(_nextEvidenceIndex + 1);

            // ???
            _spawnedOnPlane[planeId] = spawnedObj;
            Debug.Log($"[Plane {planeId}] ????? #{_nextEvidenceIndex + 1} ??? ???");

            _nextEvidenceIndex++;
        }
    }
}