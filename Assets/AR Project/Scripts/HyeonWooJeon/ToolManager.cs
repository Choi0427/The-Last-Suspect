using UnityEngine;

public class ToolManager : MonoBehaviour
{
    public static ToolManager Instance;

    // define tool
    public enum ToolType { None, Glove, UVLight, Tweezers, Brush, Bud, Inventory, File }

    [Header("Current State")]
    public ToolType currentSelectedTool = ToolType.None;

    private void Awake()
    {
        // set as a instance
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void SelectTool(int toolIndex)
    {
        // Debug.Log("🔔 장갑 버튼 눌림! 전달받은 도구 번호: " + toolIndex);

        currentSelectedTool = (ToolType)toolIndex;
    }
}