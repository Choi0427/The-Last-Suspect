using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class EvidencePlacementManager : MonoBehaviour
{
    [SerializeField] private ARRaycastManager _raycastManager;
    [SerializeField] private ARPlaneManager _planeManager;

    // Inspector에서 5개의 증거물 Prefab을 배열로 연결
    [SerializeField] private GameObject[] evidencePrefabs;

    private List<ARRaycastHit> _hits = new List<ARRaycastHit>();

    // PlaneId → 이미 배치된 증거물 오브젝트
    private Dictionary<TrackableId, GameObject> _spawnedOnPlane
        = new Dictionary<TrackableId, GameObject>();

    // 다음에 배치할 증거물 인덱스
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

            // 이 Plane에 이미 증거물이 있으면 스폰 안 함
            if (_spawnedOnPlane.ContainsKey(planeId))
            {
                Debug.Log("이 Plane에는 이미 증거물이 있습니다: " + planeId);
                return;
            }

            // 증거물 Prefab 배열이 다 소진되면 스폰 중단
            if (_nextEvidenceIndex >= evidencePrefabs.Length)
            {
                Debug.Log("모든 증거물이 배치되었습니다.");
                return;
            }

            // 새 증거물 스폰 + 앵커 고정
            Pose hitPose = hit.pose;
            GameObject spawnedObj = Instantiate(
                evidencePrefabs[_nextEvidenceIndex],
                hitPose.position,
                hitPose.rotation
            );
            spawnedObj.AddComponent<ARAnchor>();

            // EvidenceTouchHandler 추가 (Milestone 4용)
            spawnedObj.AddComponent<EvidenceTouchHandler>()
                .Init(_nextEvidenceIndex + 1);

            // 기록
            _spawnedOnPlane[planeId] = spawnedObj;
            Debug.Log($"[Plane {planeId}] 증거물 #{_nextEvidenceIndex + 1} 배치 완료");

            _nextEvidenceIndex++;
        }
    }
}