using UnityEngine;

public class SceneBgmPlayer : MonoBehaviour
{
    [SerializeField] private BgmCue bgmCue = BgmCue.CrimeScene;
    [SerializeField] private bool restartIfSame;

    private void Start()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayBgm(bgmCue, restartIfSame);
        }
    }
}
