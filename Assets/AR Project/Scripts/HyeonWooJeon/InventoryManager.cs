using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance;

    [Header("UI 연결")]
    public GameObject inventoryPanel;
    public InventorySlot[] slots;

    [Header("설명창 연결")]
    public GameObject descriptionPanel;
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI descText;
    public Image detailImage;

    void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        if (inventoryPanel != null) inventoryPanel.SetActive(false);
        ClearDescription();
    }

    public void AddEvidence(EvidenceData data)
    {
        foreach (InventorySlot slot in slots)
        {
            slot.UnlockSlot(data);
        }
        Debug.Log($"🎒 수첩에 기록됨: {data.evidenceName}");
    }

    public void ShowDescription(EvidenceData data)
    {
        if (data == null) return;

        if (descriptionPanel != null) descriptionPanel.SetActive(true);
        if (nameText != null) nameText.text = data.evidenceName;
        if (descText != null) descText.text = data.description;

        if (detailImage != null && data.icon != null)
        {
            detailImage.sprite = data.icon;
            // ⭐ 트릭: 사진이 들어오면 투명도를 100%(불투명)로 만들어서 짠! 하고 보여줍니다.
            detailImage.color = new Color(1, 1, 1, 1f);
            detailImage.gameObject.SetActive(true);
        }

        Debug.Log($"✅ {data.evidenceName} 설명 출력 완료");
    }

    public void ToggleInventory()
    {
        bool isOpening = !inventoryPanel.activeSelf;
        inventoryPanel.SetActive(isOpening);

        if (isOpening)
        {
            ClearDescription();
        }
    }

    public void ClearDescription()
    {
        if (descriptionPanel != null) descriptionPanel.SetActive(false);
        if (nameText != null) nameText.text = "";
        if (descText != null) descText.text = "";

        if (detailImage != null)
        {
            detailImage.sprite = null; // 기존 사진 비우기
            // 인벤토리를 처음 열 때는 투명도를 0%로 만들어서 하얀 네모를 완전히 숨깁니다.
            detailImage.color = new Color(1, 1, 1, 0f);
            detailImage.gameObject.SetActive(false);
        }
    }
}