using UnityEngine;

public class ToolManager : MonoBehaviour
{
    // 1. 어디서든 접근할 수 있게 만드는 싱글톤 인스턴스
    public static ToolManager Instance;

    // 2. 도구 종류 정의 (None이 맨 앞에 있어야 합니다)
    public enum ToolType { None, Glove, UVLight, Tweezers, Brush, Bud, Inventory, File }

    [Header("Current State")]
    // 💡 핵심 원인: 다른 스크립트에서 이 변수를 읽어야 하므로 반드시 'public'이 붙어있어야 합니다!
    public ToolType currentSelectedTool = ToolType.None;

    private void Awake()
    {
        // 게임 시작 시 자신을 Instance로 등록
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // UI 버튼(UV 라이트 등)을 눌렀을 때 연결해 줄 함수
    public void SelectTool(int toolIndex)
    {
        // 🔥 버튼이 신호를 제대로 보냈는지 확인하는 로그
        Debug.Log("🔔 장갑 버튼 눌림! 전달받은 도구 번호: " + toolIndex);

        // (기존 코드들...)
        currentSelectedTool = (ToolType)toolIndex;
    }
}