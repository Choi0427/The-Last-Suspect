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
        // what tool am I holding now

        // player holding correct tool
        if (ToolManager.Instance.currentSelectedTool == requiredTool)
        {
            CollectEvidence();
        }
        else
        {
            if (UIManager.Instance != null)
            {
                UIManager.Instance.ShowDetectiveDialogue(failHintMessage);
            }
        }
    }

    private void CollectEvidence()
    {
        // inventory check
        if (InventoryManager.Instance != null && myData != null)
        {
            InventoryManager.Instance.AddEvidence(myData);
        }
        gameObject.SetActive(false);
    }

    private void ShowHint()
    {
        UIManager.Instance.ShowDetectiveDialogue(failHintMessage);
    }
}