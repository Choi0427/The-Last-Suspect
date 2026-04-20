using UnityEngine;
using UnityEngine.EventSystems; // UI 터치 방지용

public class ARInteractionHandler : MonoBehaviour
{
    [Header("setting")]
    public float maxDistance = 5.0f; // 상호작용 가능한 최대 거리 (5미터)
    public LayerMask evidenceLayer; // 증거물만 선택적으로 감지하기 위한 레이어

    void Update()
    {
        // 1. 터치 발생 확인 (모바일: TouchCount, 에디터 테스트: MouseButtonDown)
        if (GetInputDown())
        {
            // 2. UI(버튼 등)를 클릭 중이라면 월드 상호작용 무시
            if (IsPointerOverUI()) return;

            // 3. 터치 위치로부터 레이 생성
            Ray ray = Camera.main.ScreenPointToRay(GetInputPosition());
            RaycastHit hit;

            // 4. 레이 발사 (모든 물체가 아니라 'evidenceLayer'로 설정된 물체만 검사 가능)
            if (Physics.Raycast(ray, out hit, maxDistance, evidenceLayer))
            {
                Debug.Log($"collider: {hit.collider.name}");

                // 5. 충돌한 오브젝트에서 EvidenceObject 스크립트 찾기
                EvidenceObject evidence = hit.collider.GetComponent<EvidenceObject>();
                if (evidence != null)
                {
                    evidence.OnEvidenceTapped();
                }
            }
        }
    }

    // 모바일 터치와 마우스 클릭을 모두 지원하는 헬퍼 함수
    private bool GetInputDown()
    {
        return Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began);
    }

    private Vector3 GetInputPosition()
    {
        if (Input.touchCount > 0) return Input.GetTouch(0).position;
        return Input.mousePosition;
    }

    // UI 뒤의 물체가 클릭되는 것을 방지
    private bool IsPointerOverUI()
    {
        if (EventSystem.current == null) return false;
        if (Input.touchCount > 0)
            return EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId);
        return EventSystem.current.IsPointerOverGameObject();
    }
}