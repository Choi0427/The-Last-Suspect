using UnityEngine;
using UnityEngine.UI; // Image component
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

    public void ShowDescription(EvidenceData data) //activate the evidence description
    {
        if (data == null) return;

        if (descriptionPanel != null) descriptionPanel.SetActive(true);

        if (nameText != null) nameText.text = data.evidenceName;
        if (descText != null) descText.text = data.description;

        if (detailImage != null && data.icon != null)
        {
            detailImage.sprite = data.icon;
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
        // Disable the description before clicking the collected evidences
        if (descriptionPanel != null)
            descriptionPanel.SetActive(false);

        if (nameText != null) nameText.text = "";
        if (descText != null) descText.text = "";
        if (detailImage != null) detailImage.gameObject.SetActive(false);
    }
}