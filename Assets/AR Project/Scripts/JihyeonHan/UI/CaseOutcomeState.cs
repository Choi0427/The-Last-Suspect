public enum SuspectCandidate
{
    None,
    SuspectA,
    SuspectB,
    SuspectC,
    Detective
}

public static class CaseOutcomeState
{
    public static SuspectCandidate SelectedCandidate { get; set; } = SuspectCandidate.None;
}
