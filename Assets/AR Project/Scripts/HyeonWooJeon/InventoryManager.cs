using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance;

    [Header("Popup")]
    [SerializeField] private GameObject popupRoot;          // 비워두면 inventoryPanel 사용
    [SerializeField] private bool hideOnStart = true;
    [SerializeField] private List<GameObject> uiToHideWhileOpen = new List<GameObject>();

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
        if (hideOnStart)
        {
            SetPopupVisible(false);
        }
        else if (inventoryPanel != null)
        {
            inventoryPanel.SetActive(true);
        }

        ClearDescription();
    }

    public void AddEvidence(EvidenceData data)
    {
        if (data == null) return;

        Debug.Log($"[AddEvidence] 수집된 데이터: {data.name} (ID: {data.GetInstanceID()})");

        foreach (InventorySlot slot in slots)
        {
            Debug.Log($"  슬롯 expectedData: {slot.expectedData?.name} (ID: {slot.expectedData?.GetInstanceID()})");
            slot.UnlockSlot(data);
        }

        Debug.Log($"🎒 수첩에 기록됨: {data.evidenceName}");
    }

    public void ShowDescription(EvidenceData data)
    {
        if (data == null) return;

        if (descriptionPanel != null)
            descriptionPanel.SetActive(true);

        if (nameText != null)
            nameText.text = data.evidenceName;

        if (descText != null)
            descText.text = data.description;

        if (detailImage != null)
        {
            detailImage.sprite = data.icon;
            detailImage.enabled = (data.icon != null);
            detailImage.color = new Color(1, 1, 1, data.icon != null ? 1f : 0f);
            detailImage.gameObject.SetActive(data.icon != null);
        }

        Debug.Log($"✅ {data.evidenceName} 설명 출력 완료");
    }

    public void Open()
    {
        SetPopupVisible(true);
        ClearDescription();
    }

    public void Close()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        SetPopupVisible(false);
    }

    public void ToggleInventory()
    {
        GameObject target = popupRoot != null ? popupRoot : inventoryPanel;
        if (target == null) return;

        bool isOpening = !target.activeSelf;
        SetPopupVisible(isOpening);

        if (isOpening)
        {
            ClearDescription();
        }
    }

    public void ClearDescription()
    {
        if (descriptionPanel != null)
            descriptionPanel.SetActive(false);

        if (nameText != null)
            nameText.text = "";

        if (descText != null)
            descText.text = "";

        if (detailImage != null)
        {
            detailImage.sprite = null;
            detailImage.color = new Color(1, 1, 1, 0f);
            detailImage.enabled = false;
            detailImage.gameObject.SetActive(false);
        }
    }

    private void SetPopupVisible(bool shouldShow)
    {
        GameObject target = popupRoot != null ? popupRoot : inventoryPanel;
        if (target != null)
        {
            target.SetActive(shouldShow);
        }

        foreach (GameObject uiObject in uiToHideWhileOpen)
        {
            if (uiObject != null)
            {
                uiObject.SetActive(!shouldShow);
            }
        }
    }
}