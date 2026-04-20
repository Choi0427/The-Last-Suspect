using UnityEngine;

public class SuspectSelectionTarget : MonoBehaviour
{
    [SerializeField] private SuspectCandidate candidate = SuspectCandidate.None;

    public SuspectCandidate Candidate => candidate;
}
