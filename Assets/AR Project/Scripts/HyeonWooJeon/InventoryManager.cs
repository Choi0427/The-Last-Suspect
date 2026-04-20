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
        Debug.Log($"📺 매니저 수신 완료! 도화지 글씨를 [{data.evidenceName}] 데이터로 덮어씁니다!");

        if (data == null) { Debug.LogError("❌ 에러: 데이터가 없음!"); return; }
        if (descriptionPanel == null) { Debug.LogError("❌ 에러: 패널 연결 안 됨!"); return; }
        if (nameText == null) { Debug.LogError("❌ 에러: NameText 연결 안 됨!"); return; }
        if (descText == null) { Debug.LogError("❌ 에러: DescText 연결 안 됨!"); return; }

        descriptionPanel.SetActive(true);
        nameText.text = data.evidenceName;
        descText.text = data.description;

        Debug.Log($"✅ 글씨 변경 명령 성공! 지금 도화지에 적힌 글씨는: [{descText.text}] 입니다.");
    }

  // open/close inventory
    public void ToggleInventory()
    {
        bool isOpening = !inventoryPanel.activeSelf;
        inventoryPanel.SetActive(isOpening);
        descriptionPanel.SetActive(false);
    }
}