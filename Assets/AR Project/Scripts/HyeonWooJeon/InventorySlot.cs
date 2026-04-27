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
        if (isCollected) return; // 이미 수집된 상태면 초기화 스킵

        // hide icon at first, show in ???
        iconImage.enabled = false;
        if (unknownText != null) unknownText.gameObject.SetActive(true);
        Button btn = GetComponent<Button>();
        if (btn != null) btn.interactable = false;
    }

    public void UnlockSlot(EvidenceData collectedData)
    {
        Debug.Log($"[UnlockSlot] 함수 진입 | collectedData: {(collectedData != null ? collectedData.name : "NULL")} (ID: {(collectedData != null ? collectedData.GetInstanceID().ToString() : "N/A")})");
        Debug.Log($"[UnlockSlot] expectedData: {(expectedData != null ? expectedData.name : "NULL")} (ID: {(expectedData != null ? expectedData.GetInstanceID().ToString() : "N/A")})");
        Debug.Log($"[UnlockSlot] 참조 일치 여부: {expectedData == collectedData}");

        if (expectedData == collectedData)
        {
            isCollected = true;
            Debug.Log($"[UnlockSlot] isCollected = true 설정 완료");

            Debug.Log($"[UnlockSlot] expectedData.icon: {(expectedData.icon != null ? expectedData.icon.name : "NULL")} (ID: {(expectedData.icon != null ? expectedData.icon.GetInstanceID().ToString() : "N/A")})");
            iconImage.sprite = expectedData.icon;
            Debug.Log($"[UnlockSlot] iconImage.sprite 교체 완료 | 현재 sprite: {(iconImage.sprite != null ? iconImage.sprite.name : "NULL")} (ID: {(iconImage.sprite != null ? iconImage.sprite.GetInstanceID().ToString() : "N/A")})");

            Debug.Log($"[UnlockSlot] iconImage 컴포넌트: {(iconImage != null ? "존재" : "NULL")} | enabled 전: {iconImage.enabled}");
            iconImage.enabled = true;
            Debug.Log($"[UnlockSlot] iconImage.enabled = true 완료 | 현재: {iconImage.enabled}");

            Debug.Log($"[UnlockSlot] iconImage 색상: R={iconImage.color.r} G={iconImage.color.g} B={iconImage.color.b} A={iconImage.color.a}");
            Debug.Log($"[UnlockSlot] iconImage gameObject active: {iconImage.gameObject.activeSelf} | 부모 active: {iconImage.transform.parent?.gameObject.activeSelf}");

            if (unknownText != null)
            {
                unknownText.gameObject.SetActive(false);
                Debug.Log($"[UnlockSlot] unknownText 비활성화 완료");
            }
            else
            {
                Debug.LogWarning($"[UnlockSlot] unknownText가 NULL입니다.");
            }

            Button btn = GetComponent<Button>();
            Debug.Log($"[UnlockSlot] Button 컴포넌트: {(btn != null ? "존재" : "NULL")}");
            if (btn != null)
            {
                btn.interactable = true;
                Debug.Log($"[UnlockSlot] Button.interactable = true 완료 | 현재: {btn.interactable}");
            }
            else
            {
                Debug.LogWarning($"[UnlockSlot] Button 컴포넌트가 없습니다! gameObject: {gameObject.name}");
            }
        }
        else
        {
            Debug.Log($"[UnlockSlot] 데이터 불일치로 슬롯 열기 스킵");
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