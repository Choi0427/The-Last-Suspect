using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

// Handles suspect picking, confirmation, and handoff into the ending scene.
public class SuspectSelectionController : MonoBehaviour
{
    [Header("Popup")]
    [SerializeField] private GameObject confirmPopup;
    [SerializeField] private TMP_Text confirmMessageText;

    [Header("Scene Flow")]
    [SerializeField] private string endingSceneName = "EndingScene";

    private SuspectCandidate pendingCandidate = SuspectCandidate.None;

    private void Start()
    {
        if (confirmPopup != null)
        {
            confirmPopup.SetActive(false);
        }
    }

    public void SelectCandidateByInt(int candidateIndex)
    {
        if (!System.Enum.IsDefined(typeof(SuspectCandidate), candidateIndex))
        {
            return;
        }

        SelectCandidate((SuspectCandidate)candidateIndex);
    }

    public void SelectCandidate(SuspectCandidate candidate)
    {
        // A selection becomes final only after the confirmation popup is accepted.
        pendingCandidate = candidate;

        if (confirmMessageText != null)
        {
            confirmMessageText.text = "Confirm suspect?";
        }

        if (confirmPopup != null)
        {
            confirmPopup.SetActive(true);
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }
    }

    public void ConfirmSelection()
    {
        // Persist the chosen suspect so the ending scene can resolve the correct outcome.
        CaseOutcomeState.SelectedCandidate = pendingCandidate;

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (!string.IsNullOrWhiteSpace(endingSceneName))
        {
            SceneManager.LoadScene(endingSceneName);
        }
    }

    public void CancelSelection()
    {
        pendingCandidate = SuspectCandidate.None;

        if (confirmPopup != null)
        {
            confirmPopup.SetActive(false);
        }

        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }
    }
}
