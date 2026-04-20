using UnityEngine;
using TMPro;
using UnityEngine.UI; 

public class UIManager : MonoBehaviour
{
    public static UIManager Instance;

    [Header("Detective UI")]
    public GameObject detectivePanel; // UI panel
    public TextMeshProUGUI detectiveText;

    [Header("Tool UI")]
    public GameObject toolPanel;

    [Header("Ending UI")]
    public GameObject endingPanel;
    public Image endingImage;
    public Sprite trueEndingSprite;
    public Sprite badEndingSprite;

    void Awake()
    {
        Instance = this;
    }

    public void ToggleToolPanel()
    {
        toolPanel.SetActive(!toolPanel.activeSelf);
    }

    // show dialogue
    public void ShowDetectiveDialogue(string message)
    {
        detectiveText.text = message;
        detectivePanel.SetActive(true);
    }

    // UI disappearing when touched
    public void CloseDetectiveDialogue()
    {
        detectivePanel.SetActive(false);
    }

    // ending screen
    public void ShowEndingImage(bool isVictory)
    {
        endingPanel.SetActive(true);
        endingImage.sprite = isVictory ? trueEndingSprite : badEndingSprite;
    }
}