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

    // 💡 증거물을 획득했을 때 (이제 순서 상관없이 방송합니다!)
    public void AddEvidence(EvidenceData data)
    {
        // 모든 슬롯을 한 번씩 훑어보면서 잠금 해제 명령을 내립니다.
        // (자기 짝꿍이 아닌 슬롯은 무시하고, 짝꿍인 슬롯만 열리게 됩니다)
        foreach (InventorySlot slot in slots)
        {
            slot.UnlockSlot(data);
        }

        Debug.Log($"🎒 수첩에 기록됨: {data.evidenceName}");
    }

    // 💡 슬롯을 터치하면 설명창 띄우기 (동일함)
    public void ShowDescription(EvidenceData data)
    {
        descriptionPanel.SetActive(true);
        nameText.text = data.evidenceName;
        descText.text = data.description;
    }

    // 💡 수첩 열기/닫기 (동일함)
    public void ToggleInventory()
    {
        bool isOpening = !inventoryPanel.activeSelf;
        inventoryPanel.SetActive(isOpening);
        descriptionPanel.SetActive(false);
    }
}