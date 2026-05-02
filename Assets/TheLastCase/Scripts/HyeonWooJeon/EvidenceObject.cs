using UnityEngine;

public class EvidenceObject : MonoBehaviour
{
    [Header("증거물 기본 정보")]
    public EvidenceData myData;

    [Header("수사 조건 설정")]
    public ToolManager.ToolType requiredTool;


    [Header("도구별 실패 메시지")]
    [TextArea] public string uvlightFailMessage = "UV lights are for spotting things you can't see - hidden prints or that kind of stuff. Nothing her worth glowing.";
    [TextArea] public string tweezersFailMessage = "Tweezers are for small things - hair, fibers, tiny pieces. You are dumber than I thought.";
    [TextArea] public string brushFailMessage = "A brush reads patterns on surfaces. Here, there'no pattern you can dust out.";
    [TextArea] public string swabFailMessage = "Swabs are for liquid traces - blood, saliva, things that smear.";
    [TextArea] public string glovesFailMessage = "Hey, use gloves for touch something big enough that needs to collect fingerprint.";

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
            ShowToolFailMessage(ToolManager.Instance.currentSelectedTool);
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

    private void ShowToolFailMessage(ToolManager.ToolType currentTool)
    {
        if (UIManager.Instance == null) return;

        string message = "";

        switch (currentTool)
        {
            case ToolManager.ToolType.Swab:
                message = swabFailMessage;
                break;

            case ToolManager.ToolType.Tweezers:
                message = tweezersFailMessage;
                break;

            case ToolManager.ToolType.Brush:
                message = brushFailMessage;
                break;

            case ToolManager.ToolType.UVLight:
                message = uvlightFailMessage;
                break;

            case ToolManager.ToolType.Glove:
                message = glovesFailMessage;
                break;
        }

        UIManager.Instance.ShowDetectiveDialogue(message);
    }
}