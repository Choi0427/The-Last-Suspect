using UnityEngine;

public class EvidenceObject : MonoBehaviour
{
    [Header("Investigating...")]
    public ToolType requiredTool;
    public string hintText;

    public void InteractWithTool(ToolType playerTool)
    {
        if (playerTool == requiredTool)
        {
            // 올바른 도구사용
            UIManager.Instance.ShowHintPopup(hintText);
        }
        else if (playerTool == ToolType.None)
        {
            // 혹시 모르니까 무반응 출력도 넣을게요
            UIManager.Instance.ShowHintPopup("Select the tool");
        }
        else
        {
            // 틀린 도구
            UIManager.Instance.ShowHintPopup("Use other tool");
            //틀린도구 쓰면 경고/증거물 파손
        }
    }
}