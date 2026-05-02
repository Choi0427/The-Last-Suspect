using UnityEngine;

public class ToolManager : MonoBehaviour
{
    public static ToolManager Instance;

    // define tool
    public enum ToolType { None, Glove, UVLight, Tweezers, Brush, Swab, Inventory, File }

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

    // tool pressed
    public void SelectTool(int toolIndex)
    {
        currentSelectedTool = (ToolType)toolIndex;
    }
}