using UnityEngine;
using TMPro;
using UnityEngine.UI; // Image 사용을 위해 추가

public class UIManager : MonoBehaviour
{
    public static UIManager Instance;

    [Header("Detective UI")]
    public GameObject detectivePanel; // 선임 형사 UI 패널
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

    // 1. 선임 형사 대사 띄우기
    public void ShowDetectiveDialogue(string message)
    {
        detectiveText.text = message;
        detectivePanel.SetActive(true);
    }

    // 터치하면 UI가 사라지도록 (투명 버튼 등에 연결)
    public void CloseDetectiveDialogue()
    {
        detectivePanel.SetActive(false);
    }

    // 2. 엔딩 이미지 띄우기
    public void ShowEndingImage(bool isVictory)
    {
        endingPanel.SetActive(true);
        endingImage.sprite = isVictory ? trueEndingSprite : badEndingSprite;
    }
}