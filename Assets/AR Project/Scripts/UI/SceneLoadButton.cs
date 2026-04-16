using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

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
            yield return new WaitForSeconds(loadDelaySeconds);
        }

        SceneManager.LoadScene(targetSceneName);
    }
}
