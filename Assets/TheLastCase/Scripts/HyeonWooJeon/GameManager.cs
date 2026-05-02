using UnityEngine;
using UnityEngine.SceneManagement; // for scene management
using System;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    // define game state
    public enum GameState
    {
        // game progression
        Investigation, 
        Accusation,    
        GameOver       
    }

    [Header("Game State")]
    public GameState currentState = GameState.Investigation;

    [Header("Investigation Progress")]
    public int totalEvidenceCount = 5; // required evidences
    public int collectedEvidenceCount = 0; // current collected evidences

    // state change alert
    public static event Action<GameState> OnStateChanged;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            // keep running managers
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    /// <summary>
    /// functions called when evidences are collected
    /// </summary>
    public void AddEvidence()
    {
        collectedEvidenceCount++;

        // switch to accusation scene
        if (collectedEvidenceCount >= totalEvidenceCount)
        {
            // switch scene 2 secs later(complete message)
            Invoke("GoToAccusationScene", 2.0f);
        }
    }

    /// <summary>
    /// functions switching to accusationscene
    /// </summary>
    private void GoToAccusationScene()
    {
        ChangeState(GameState.Accusation);

        SceneManager.LoadScene("AccusationScene");
    }

    /// <summary>
    /// 게임 상태를 변경 (수사 -> 지목 등)
    /// </summary>
    public void ChangeState(GameState newState)
    {
        currentState = newState;

        // state switch event
        OnStateChanged?.Invoke(currentState);
    }

    /// <summary>
    /// 최종 범인 판정 결과
    /// </summary>
    public void EndGame(bool isVictory)
    {
        currentState = GameState.GameOver;

        // result UI 
        if (UIManager.Instance != null)
        {
            UIManager.Instance.ShowEndingImage(isVictory);
        }
    }
}