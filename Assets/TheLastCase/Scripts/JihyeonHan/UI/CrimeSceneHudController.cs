using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum CrimeToolType
{
    None,
    Gloves,
    UVLight,
    Tweezers,
    Brush,
    Swab
}

[Serializable]
public class CrimeToolButtonEntry
{
    public CrimeToolType toolType;
    public Button button;
    public Image highlightImage;
}

// Tracks the currently selected investigation tool and refreshes the HUD highlight state.
public class CrimeSceneHudController : MonoBehaviour
{
    [Header("Tool Buttons")]
    [SerializeField] private List<CrimeToolButtonEntry> toolButtons = new List<CrimeToolButtonEntry>();

    [Header("Colors")]
    [SerializeField] private Color selectedColor = new Color(0.82f, 0.2f, 0.2f, 1f);
    [SerializeField] private Color unselectedColor = Color.white;
    [SerializeField] private bool hideHighlightWhenUnselected = true;

    public CrimeToolType CurrentTool { get; private set; } = CrimeToolType.None;

    private void Start()
    {
        RefreshVisuals();
    }

    public void SelectToolByInt(int toolIndex)
    {
        // Int-based routing keeps Unity button events simple in the inspector.
        if (!Enum.IsDefined(typeof(CrimeToolType), toolIndex))
        {
            return;
        }

        SelectTool((CrimeToolType)toolIndex);
    }

    public void SelectTool(CrimeToolType toolType)
    {
        CurrentTool = toolType;

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        RefreshVisuals();
    }

    public void ClearToolSelection()
    {
        CurrentTool = CrimeToolType.None;
        RefreshVisuals();
    }

    private void RefreshVisuals()
    {
        foreach (CrimeToolButtonEntry entry in toolButtons)
        {
            bool isSelected = entry.toolType == CurrentTool && CurrentTool != CrimeToolType.None;

            if (entry.highlightImage != null)
            {
                entry.highlightImage.color = isSelected ? selectedColor : unselectedColor;
                entry.highlightImage.enabled = isSelected || !hideHighlightWhenUnselected;
            }
        }
    }
}
