using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[Serializable]
public class EvidenceInventoryEntry
{
    public string evidenceName;

    [TextArea(3, 8)]
    public string description;

    public Sprite thumbnail;
    public Sprite detailImage;
}

// Presents collected evidence inside a popup and swaps the visible entry on demand.
public class EvidenceInventoryUI : MonoBehaviour
{
    [Header("Popup")]
    [SerializeField] private GameObject popupRoot;
    [SerializeField] private bool hideOnStart = true;
    [SerializeField] private List<GameObject> uiToHideWhileOpen = new List<GameObject>();

    [Header("Content")]
    [SerializeField] private TMP_Text evidenceNameText;
    [SerializeField] private TMP_Text descriptionText;
    [SerializeField] private Image detailImage;

    [Header("Entries")]
    [SerializeField] private List<EvidenceInventoryEntry> evidenceEntries = new List<EvidenceInventoryEntry>();

    private int currentIndex = -1;

    private void Start()
    {
        if (hideOnStart)
        {
            SetPopupVisible(false);
        }

        if (evidenceEntries.Count > 0)
        {
            ShowEvidence(0);
        }
    }

    public void Open()
    {
        SetPopupVisible(true);

        if (evidenceEntries.Count > 0)
        {
            ShowEvidence(currentIndex >= 0 ? currentIndex : 0);
        }
        else
        {
            ClearDisplay();
        }
    }

    public void Close()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        SetPopupVisible(false);
    }

    public void ShowEvidence(int index)
    {
        if (evidenceEntries.Count == 0)
        {
            ClearDisplay();
            return;
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        currentIndex = Mathf.Clamp(index, 0, evidenceEntries.Count - 1);
        EvidenceInventoryEntry entry = evidenceEntries[currentIndex];

        if (evidenceNameText != null)
        {
            evidenceNameText.text = entry.evidenceName;
        }

        if (descriptionText != null)
        {
            descriptionText.text = entry.description;
        }

        if (detailImage != null)
        {
            // Prefer the dedicated close-up image, but fall back to the thumbnail when needed.
            detailImage.sprite = entry.detailImage != null ? entry.detailImage : entry.thumbnail;
            detailImage.enabled = detailImage.sprite != null;
        }
    }

    private void ClearDisplay()
    {
        if (evidenceNameText != null)
        {
            evidenceNameText.text = string.Empty;
        }

        if (descriptionText != null)
        {
            descriptionText.text = string.Empty;
        }

        if (detailImage != null)
        {
            detailImage.sprite = null;
            detailImage.enabled = false;
        }
    }

    private void SetPopupVisible(bool shouldShow)
    {
        // This mirrors the suspect popup behavior so only one major overlay owns the screen at a time.
        GameObject target = popupRoot != null ? popupRoot : gameObject;
        target.SetActive(shouldShow);

        foreach (GameObject uiObject in uiToHideWhileOpen)
        {
            if (uiObject != null)
            {
                uiObject.SetActive(!shouldShow);
            }
        }
    }
}
