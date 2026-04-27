using UnityEngine;
using UnityEngine.UI;
using TMPro;

// Main inventory manager class
public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance;

    [Header("UI 연결")]
    // 인벤토리 창 전체를 묶어두는 가장 큰 부모 배경 패널
    public GameObject inventoryPanel;
    // 인벤토리 내부에 배치된 각각의 증거물 버튼(슬롯)들을 담아두는 배열
    public InventorySlot[] slots;

    [Header("설명창 연결")] // shows informations of collected evidences
    public GameObject descriptionPanel;
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI descText;

    void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        // start the game with closed inventory
        if (inventoryPanel != null) inventoryPanel.SetActive(false);

        ClearDescription();
    }

    // when player collected the evidence
    public void AddEvidence(EvidenceData data)
    {
        Debug.Log($"[AddEvidence] 수집된 데이터: {data.name} (ID: {data.GetInstanceID()})");
        foreach (InventorySlot slot in slots)
        {
            Debug.Log($"  슬롯 expectedData: {slot.expectedData?.name} (ID: {slot.expectedData?.GetInstanceID()})");
            slot.UnlockSlot(data);
        }
        Debug.Log($"🎒 수첩에 기록됨: {data.evidenceName}");
    }

    // shows the informations of collected evidence
    public void ShowDescription(EvidenceData data)
    {
        if (data == null) return;

        if (descriptionPanel != null) descriptionPanel.SetActive(true);

        if (nameText != null) nameText.text = data.evidenceName;
        if (descText != null) descText.text = data.description;

        Debug.Log($"✅ {data.evidenceName} 설명 출력 완료");
    }

    // inventory ON/OFF
    public void ToggleInventory()
    {
        // 현재 인벤토리 패널이 꺼져있으면 true(켜기), 켜져있으면 false(끄기)로 반전시킵니다.
        bool isOpening = !inventoryPanel.activeSelf;
        inventoryPanel.SetActive(isOpening);

        // reset the description only when the inventory is opened. Erase the leftover informations
        if (isOpening)
        {
            ClearDescription();
        }
    }

    // hiding the informations of evidences.
    public void ClearDescription()
    {
        if (descriptionPanel != null) descriptionPanel.SetActive(false);

        if (nameText != null) nameText.text = "";
        if (descText != null) descText.text = "";
    }
}