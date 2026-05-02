using UnityEngine;

// Marks a 3D character or collider hierarchy as a selectable suspect target.
public class SuspectSelectionTarget : MonoBehaviour
{
    [SerializeField] private SuspectCandidate candidate = SuspectCandidate.None;

    public SuspectCandidate Candidate => candidate;
}
