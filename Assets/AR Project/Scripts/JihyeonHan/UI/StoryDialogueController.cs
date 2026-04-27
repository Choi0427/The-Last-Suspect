using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

[Serializable]
public class StoryDialogueLine
{
    public string speakerName = "Detective";

    [TextArea(2, 6)]
    public string message;
}

// Advances a linear dialogue sequence and optionally hands off to the next scene when it ends.
public class StoryDialogueController : MonoBehaviour
{
    [Header("UI References")]
    [SerializeField] private TMP_Text speakerNameText;
    [SerializeField] private TMP_Text dialogueText;
    [SerializeField] private GameObject continueIndicator;

    [Header("Dialogue")]
    [SerializeField] private List<StoryDialogueLine> dialogueLines = new List<StoryDialogueLine>();
    [SerializeField] private bool tapAnywhereToAdvance = true;
    [SerializeField] private float minimumAdvanceInterval = 0.15f;

    [Header("Scene Flow")]
    [SerializeField] private string nextSceneName = "CrimeScene";
    [SerializeField] private bool loadNextSceneOnComplete = true;

    private int currentLineIndex;
    private float lastAdvanceTime = -999f;
    private bool completed;

    private void Start()
    {
        currentLineIndex = 0;
        RefreshCurrentLine();
    }

    private void Update()
    {
        // The cooldown prevents a single tap from skipping multiple lines in one frame burst.
        if (!tapAnywhereToAdvance || completed)
        {
            return;
        }

        if (Time.unscaledTime - lastAdvanceTime < minimumAdvanceInterval)
        {
            return;
        }

        if (IsAdvancePressed())
        {
            AdvanceDialogue();
        }
    }

    public void AdvanceDialogue()
    {
        if (completed || Time.unscaledTime - lastAdvanceTime < minimumAdvanceInterval)
        {
            return;
        }

        lastAdvanceTime = Time.unscaledTime;

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (dialogueLines.Count == 0)
        {
            CompleteDialogue();
            return;
        }

        currentLineIndex++;

        if (currentLineIndex >= dialogueLines.Count)
        {
            CompleteDialogue();
            return;
        }

        RefreshCurrentLine();
    }

    public void RestartDialogue()
    {
        completed = false;
        currentLineIndex = 0;
        RefreshCurrentLine();
    }

    private void RefreshCurrentLine()
    {
        if (dialogueLines.Count == 0)
        {
            SetText(string.Empty, string.Empty);
            SetContinueIndicator(false);
            return;
        }

        StoryDialogueLine line = dialogueLines[Mathf.Clamp(currentLineIndex, 0, dialogueLines.Count - 1)];
        SetText(line.speakerName, line.message);
        SetContinueIndicator(true);
    }

    private void CompleteDialogue()
    {
        completed = true;
        SetContinueIndicator(false);

        // Scene flow is data-driven so the same controller can be reused in other cutscenes.
        if (loadNextSceneOnComplete && !string.IsNullOrWhiteSpace(nextSceneName))
        {
            SceneManager.LoadScene(nextSceneName);
        }
    }

    private void SetText(string speakerName, string message)
    {
        if (speakerNameText != null)
        {
            speakerNameText.text = speakerName;
        }

        if (dialogueText != null)
        {
            dialogueText.text = message;
        }
    }

    private void SetContinueIndicator(bool shouldShow)
    {
        if (continueIndicator != null)
        {
            continueIndicator.SetActive(shouldShow);
        }
    }

    private static bool IsAdvancePressed()
    {
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            return true;
        }

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            return true;
        }

        return false;
    }
}
