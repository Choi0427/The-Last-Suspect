using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventorySlot : MonoBehaviour
{
    // [Header("슬롯 설정")]
    public EvidenceData expectedData; 

    // [Header("UI 연결")]
    public Image iconImage;
    public TextMeshProUGUI unknownText; 

    private bool isCollected = false; 

    void Start()
    {
        // hide icon at first, show in ???
        iconImage.enabled = false;
        if (unknownText != null) unknownText.gameObject.SetActive(true);
        GetComponent<Button>().interactable = false;
    }

    // manager announcing about discovered evidence
    public void UnlockSlot(EvidenceData collectedData)
    {
        if (expectedData == collectedData)
        {
            isCollected = true;
            iconImage.sprite = expectedData.icon; 
            iconImage.enabled = true; 

            if (unknownText != null) unknownText.gameObject.SetActive(false); // disactive ??? text

            GetComponent<Button>().interactable = true; //clickable now
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