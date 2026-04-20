using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventorySlot : MonoBehaviour
{
    [Header("슬롯 설정")]
    public EvidenceData expectedData; // 💡 이 슬롯의 '지정석' 주인 (인스펙터에서 설정)

    [Header("UI 연결")]
    public Image iconImage;
    public TextMeshProUGUI unknownText; // 💡 "???" 글씨를 띄울 텍스트

    private bool isCollected = false; // 현재 찾았는지 여부

    void Start()
    {
        // 1. 게임 시작 시: 아이콘은 숨기고, "???" 텍스트는 켜고, 버튼은 잠급니다.
        iconImage.enabled = false;
        if (unknownText != null) unknownText.gameObject.SetActive(true);
        GetComponent<Button>().interactable = false;
    }

    // 2. 매니저가 "증거물 찾았어!" 하고 방송할 때 실행되는 함수
    public void UnlockSlot(EvidenceData collectedData)
    {
        // 들어온 증거물이 내 지정석 주인이 맞다면?!
        if (expectedData == collectedData)
        {
            isCollected = true;
            iconImage.sprite = expectedData.icon; // 진짜 이미지로 교체
            iconImage.enabled = true; // 아이콘 켜기

            if (unknownText != null) unknownText.gameObject.SetActive(false); // "???" 글씨 끄기

            GetComponent<Button>().interactable = true; // 이제 클릭 가능!
        }
    }

    // 3. 슬롯(버튼)을 클릭했을 때 설명창 띄우기
    public void OnSlotClick()
    {
        if (isCollected && expectedData != null)
        {
            InventoryManager.Instance.ShowDescription(expectedData);
        }
    }
}