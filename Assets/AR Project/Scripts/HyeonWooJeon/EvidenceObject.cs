using UnityEngine;

public class EvidenceObject : MonoBehaviour
{
    [Header("증거물 기본 정보")]
    public EvidenceData myData;

    [Header("수사 조건 설정")]
    public ToolManager.ToolType requiredTool;

    [TextArea]
    public string failHintMessage = "Hey, you can't get any hints using that";

    public void OnEvidenceTapped()
    {
        // 🔥 지금 무슨 도구를 들고 있는지 로그로 확인!
        Debug.Log($"🔎 [판정 시작] 이 증거물에 필요한 도구: {requiredTool} / 플레이어가 지금 든 도구: {ToolManager.Instance.currentSelectedTool}");

        // 1. 올바른 도구를 들고 있는지 검사
        // (기존 코드 중 도구 검사하는 부분)
        if (ToolManager.Instance.currentSelectedTool == requiredTool)
        {
            Debug.Log("✅ 도구 일치! 수집을 진행합니다.");
            CollectEvidence();
        }
        else
        {
            Debug.Log("❌ 도구 불일치! 힌트 대사창을 띄웁니다.");

            // 🚀 추가된 핵심 코드: UIManager를 불러와서 선임 형사 대사를 띄웁니다!
            if (UIManager.Instance != null)
            {
                UIManager.Instance.ShowDetectiveDialogue(failHintMessage);
            }
        }
    }

    private void CollectEvidence()
    {
        // 1. 인벤토리 매니저가 있고, 증거물 데이터도 잘 채워져 있는지 안전하게 확인!
        if (InventoryManager.Instance != null && myData != null)
        {
            InventoryManager.Instance.AddEvidence(myData);
            Debug.Log("🎒 인벤토리에 증거물이 추가되었습니다!");
        }
        else
        {
            Debug.LogWarning("⚠️ [참고] 인벤토리 매니저가 없거나 증거물 데이터(myData)가 비어있어서 가방에 넣는 과정은 생략했습니다.");
        }

        // 2. 가방 세팅과 무관하게, 도구가 일치하면 오브젝트는 무조건 눈앞에서 사라지게 만듭니다!
        gameObject.SetActive(false);
        Debug.Log("✨ 증거물이 화면에서 성공적으로 사라졌습니다!");
    }

    private void ShowHint()
    {
        UIManager.Instance.ShowDetectiveDialogue(failHintMessage);
    }
}