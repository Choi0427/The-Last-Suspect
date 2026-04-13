using UnityEngine;
using TMPro;

public class UIManager : MonoBehaviour
{
    public static UIManager Instance;

    [Header("Pop-up UI link")]
    public GameObject hintPopupPanel;
    public TextMeshProUGUI hintText;

    [Header("Tool UI link")]
    public GameObject toolPanel; // 껐다 켤 도구 상자

    void Awake()
    {
        Instance = this;
    }

    // 인벤토리/가방
    public void ToggleToolPanel()
    {
        // 패널 ON/OFF
        bool isPanelActive = toolPanel.activeSelf;
        toolPanel.SetActive(!isPanelActive);
    }

    public void ShowHintPopup(string message) { /**/ }
    public void CloseHintPopup() { /**/ }
}