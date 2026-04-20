using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventorySlot : MonoBehaviour
{
    [Header("슬롯 설정")]
    public EvidenceData expectedData; 

    [Header("UI 연결")]
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
        // 1. 버튼이 눌렸는지 자체를 확인
        Debug.Log($"👆 버튼 클릭 감지됨! (이 슬롯의 지정석: {expectedData.evidenceName})");

        if (isCollected && expectedData != null)
        {
            Debug.Log($"👉 짝꿍 데이터 확인 완료! 매니저에게 [{expectedData.evidenceName}] 설명을 요청합니다!");
            InventoryManager.Instance.ShowDescription(expectedData);
        }
        else
        {
            Debug.Log($"🚫 거절됨: 아직 수집하지 않은 증거물(isCollected: {isCollected})이거나 데이터가 없습니다!");
        }
    }
}