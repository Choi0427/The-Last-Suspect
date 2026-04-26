using UnityEngine;

// Scene-level trigger that requests the desired BGM cue as soon as the scene starts.
public class SceneBgmPlayer : MonoBehaviour
{
    [SerializeField] private BgmCue bgmCue = BgmCue.CrimeScene;

    private void Start()
    {
        if (AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayBgm(bgmCue);
        }
    }
}
