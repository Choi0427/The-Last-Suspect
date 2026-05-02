public enum SuspectCandidate
{
    None,
    SuspectA,
    SuspectB,
    SuspectC,
    Detective
}

// Stores the player's final suspect choice across scene loads without needing a persistent scene object.
public static class CaseOutcomeState
{
    public static SuspectCandidate SelectedCandidate { get; set; } = SuspectCandidate.None;
}
