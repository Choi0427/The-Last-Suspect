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

public class SuspectProfileUI : MonoBehaviour
{
    [Header("Popup")]
    [SerializeField] private GameObject popupRoot;
    [SerializeField] private bool hideOnStart = true;

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
            ShowSuspect(currentIndex);
        }

        SetPopupVisible(true);
    }

    public void Close()
    {
        SetPopupVisible(false);
    }

    public void ShowNext()
    {
        if (suspectProfiles.Count == 0)
        {
            return;
        }

        currentIndex = (currentIndex + 1) % suspectProfiles.Count;
        ShowSuspect(currentIndex);
    }

    public void ShowPrevious()
    {
        if (suspectProfiles.Count == 0)
        {
            return;
        }

        currentIndex = (currentIndex - 1 + suspectProfiles.Count) % suspectProfiles.Count;
        ShowSuspect(currentIndex);
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
    }

    private void SetPopupVisible(bool shouldShow)
    {
        GameObject target = popupRoot != null ? popupRoot : gameObject;
        target.SetActive(shouldShow);
    }
}
