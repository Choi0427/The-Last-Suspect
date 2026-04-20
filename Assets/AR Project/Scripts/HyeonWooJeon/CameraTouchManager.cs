using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;
using UnityEngine.InputSystem; // 🔥 유니티 최신 입력 시스템 장착!

public class CameraTouchManager : MonoBehaviour
{
    private Camera arCamera;
    private string logText = "대기 중... (최신 레이더 가동 준비 완료!)";

    void Start()
    {
        arCamera = GetComponent<Camera>();
    }

    void Update()
    {
        bool isInputDetected = false;
        Vector2 inputPosition = Vector2.zero;

        // 🚀 구버전(Input.touch)을 버리고, 최신버전(Pointer)으로 완벽 통합!
        // PC 마우스 좌클릭이든, 핸드폰 손가락 터치든 가리지 않고 정확히 잡아냅니다.
        if (Pointer.current != null && Pointer.current.press.wasPressedThisFrame)
        {
            inputPosition = Pointer.current.position.ReadValue();
            isInputDetected = true;
            logText = $"📱 터치/클릭 감지됨! 좌표: {inputPosition}";
        }

        // 터치가 감지되었을 때 수사 시작
        if (isInputDetected)
        {
            if (IsPointerOverUI(inputPosition))
            {
                logText += "\n🚫 투명 UI를 눌러서 3D 터치가 무시되었습니다!";
                return;
            }

            Ray ray = arCamera.ScreenPointToRay(inputPosition);

            // 모바일 삑사리 방지용 두꺼운 관통 레이저 발사!
            RaycastHit[] hits = Physics.SphereCastAll(ray, 0.5f, 50f);

            if (hits.Length > 0)
            {
                logText += $"\n🎯 {hits.Length}개 물체에 맞음!";
                bool foundEvidence = false;

                foreach (RaycastHit hit in hits)
                {
                    logText += "\n👉 맞은 물체: " + hit.collider.gameObject.name;

                    if (hit.collider.TryGetComponent(out EvidenceObject evidence))
                    {
                        logText += "\n✅ 증거물 수집 로직 실행!";
                        evidence.OnEvidenceTapped();
                        foundEvidence = true;
                        break;
                    }
                }

                if (!foundEvidence) logText += "\n❌ 맞은 물체 중 증거물이 없습니다.";
            }
            else
            {
                logText += "\n💨 광선이 텅 빈 허공으로 날아갔습니다.";
            }
        }
    }

    private bool IsPointerOverUI(Vector2 screenPosition)
    {
        if (EventSystem.current == null) return false;
        PointerEventData eventData = new PointerEventData(EventSystem.current);
        eventData.position = screenPosition;
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }

    void OnGUI()
    {
        GUIStyle style = new GUIStyle();
        style.fontSize = Screen.width / 25;
        style.normal.textColor = Color.red;
        GUI.Label(new Rect(50, 50, Screen.width, Screen.height), logText, style);
    }
}