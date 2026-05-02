using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[Serializable]
public class SuspectProfileEntry
{
    public string suspectName;

    [TextArea(3, 8)]
    public string description;

    public Sprite portrait;
}

// Controls the suspect profile popup and keeps the displayed profile in sync with the current page.
public class SuspectProfileUI : MonoBehaviour
{
    [Header("Popup")]
    [SerializeField] private GameObject popupRoot;
    [SerializeField] private bool hideOnStart = true;
    [SerializeField] private List<GameObject> uiToHideWhileOpen = new List<GameObject>();
    [SerializeField] private GameObject previousButtonObject;
    [SerializeField] private GameObject nextButtonObject;

    [Header("Content")]
    [SerializeField] private TMP_Text suspectNameText;
    [SerializeField] private TMP_Text descriptionText;
    [SerializeField] private Image portraitImage;

    [Header("Profiles")]
    [SerializeField] private List<SuspectProfileEntry> suspectProfiles = new List<SuspectProfileEntry>();

    private int currentIndex;

    private void Start()
    {
        if (hideOnStart)
        {
            SetPopupVisible(false);
        }

        if (suspectProfiles.Count > 0)
        {
            ShowSuspect(0);
        }
    }

    public void Open()
    {
        if (suspectProfiles.Count > 0)
        {
            ShowSuspect(0);
        }

        SetPopupVisible(true);
    }

    public void Close()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        SetPopupVisible(false);
    }

    public void ShowNext()
    {
        if (suspectProfiles.Count == 0)
        {
            return;
        }

        if (currentIndex >= suspectProfiles.Count - 1)
        {
            return;
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        ShowSuspect(currentIndex + 1);
    }

    public void ShowPrevious()
    {
        if (suspectProfiles.Count == 0)
        {
            return;
        }

        if (currentIndex <= 0)
        {
            return;
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        ShowSuspect(currentIndex - 1);
    }

    public void ShowSuspect(int index)
    {
        if (suspectProfiles.Count == 0)
        {
            return;
        }

        currentIndex = Mathf.Clamp(index, 0, suspectProfiles.Count - 1);
        SuspectProfileEntry profile = suspectProfiles[currentIndex];

        if (suspectNameText != null)
        {
            suspectNameText.text = profile.suspectName;
        }

        if (descriptionText != null)
        {
            descriptionText.text = profile.description;
        }

        if (portraitImage != null)
        {
            portraitImage.sprite = profile.portrait;
            portraitImage.enabled = profile.portrait != null;
        }

        RefreshNavigationButtons();
    }

    private void SetPopupVisible(bool shouldShow)
    {
        // While the profile is open, overlapping HUD elements are hidden to keep focus on the popup.
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

    private void RefreshNavigationButtons()
    {
        if (previousButtonObject != null)
        {
            previousButtonObject.SetActive(currentIndex > 0);
        }

        if (nextButtonObject != null)
        {
            nextButtonObject.SetActive(currentIndex < suspectProfiles.Count - 1);
        }
    }
}
