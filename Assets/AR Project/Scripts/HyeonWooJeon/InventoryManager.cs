using UnityEngine;
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

    void Awake()
    {
        Instance = this;
    }

    public void AddEvidence(EvidenceData data)
    {
        // unlock command of discovered evidence
        foreach (InventorySlot slot in slots)
        {
            slot.UnlockSlot(data);
        }

        Debug.Log($"🎒 수첩에 기록됨: {data.evidenceName}");
    }

    // show the description when clicking the evidence button
    public void ShowDescription(EvidenceData data)
    {
        descriptionPanel.SetActive(true);
        nameText.text = data.evidenceName;
        descText.text = data.description;
    }

  // open/close inventory
    public void ToggleInventory()
    {
        bool isOpening = !inventoryPanel.activeSelf;
        inventoryPanel.SetActive(isOpening);
        descriptionPanel.SetActive(false);
    }
}