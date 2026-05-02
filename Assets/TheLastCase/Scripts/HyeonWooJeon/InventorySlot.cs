using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventorySlot : MonoBehaviour
{
    public EvidenceData expectedData;

    public Image iconImage;
    public TextMeshProUGUI unknownText;

    private bool isCollected = false;

    void Start()
    {
        if (isCollected) return; // 이미 수집된 상태면 초기화 스킵

        // hide icon at first, show in ???
        iconImage.enabled = false;
        if (unknownText != null) unknownText.gameObject.SetActive(true);
        Button btn = GetComponent<Button>();
        if (btn != null) btn.interactable = false;
    }

    public void UnlockSlot(EvidenceData collectedData)
    {
        if (expectedData == collectedData)
        {
            isCollected = true;

            iconImage.sprite = expectedData.icon;

            iconImage.enabled = true;

            if (unknownText != null)
            {
                unknownText.gameObject.SetActive(false);
            }

            Button btn = GetComponent<Button>();
            if (btn != null)
            {
                btn.interactable = true;
            }
        }
    }

    // show description when clicked
    public void OnSlotClick()
    {
        // check the buttons clicked
        if (isCollected && expectedData != null)
        {
            InventoryManager.Instance.ShowDescription(expectedData);
        }

    }
}