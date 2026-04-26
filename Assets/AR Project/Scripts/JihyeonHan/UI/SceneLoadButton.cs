using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

// Reusable button handler that optionally plays UI audio before loading a target scene.
public class SceneLoadButton : MonoBehaviour
{
    [SerializeField] private string targetSceneName;
    [SerializeField] private bool playClickSound = true;
    [SerializeField] private float loadDelaySeconds = 0.05f;

    private bool isLoading;

    public void LoadTargetScene()
    {
        if (isLoading || string.IsNullOrWhiteSpace(targetSceneName))
        {
            return;
        }

        StartCoroutine(LoadSceneRoutine());
    }

    private IEnumerator LoadSceneRoutine()
    {
        isLoading = true;

        if (playClickSound && AudioManager.Instance != null)
        {
            AudioManager.Instance.PlayUiClick();
        }

        if (loadDelaySeconds > 0f)
        {
            // A short delay lets the click sound start before the current scene is unloaded.
            yield return new WaitForSeconds(loadDelaySeconds);
        }

        SceneManager.LoadScene(targetSceneName);
    }
}
