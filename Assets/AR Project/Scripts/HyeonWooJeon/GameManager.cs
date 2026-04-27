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
        // Debug.Log($"현재 수집한 증거: {collectedEvidenceCount} / {totalEvidenceCount}");

        // switch to accusation scene
        if (collectedEvidenceCount >= totalEvidenceCount)
        {
            // Debug.Log("모든 증거를 수집했습니다! 지목 씬으로 이동합니다.");
            // switch scene 2 secs later(complete message)
            Invoke("GoToAccusationScene", 2.0f);
        }
    }

    /// <summary>
    /// functions switching to accusationscene
    /// </summary>
    private void GoToAccusationScene()
    {
        // 1. 상태를 '용의자 지목'으로 변경
        ChangeState(GameState.Accusation);

        // 2. 실제 유니티 씬 전환 (괄호 안에 빌드 세팅에 등록된 정확한 씬 이름을 적어주세요!)
        // 예: SceneManager.LoadScene("AccusationScene");
        SceneManager.LoadScene("AccusationScene");
    }

    /// <summary>
    /// 게임 상태를 변경 (수사 -> 지목 등)
    /// </summary>
    public void ChangeState(GameState newState)
    {
        currentState = newState;
        Debug.Log($"게임 상태 변경: {currentState}");

        // 상태 변경 이벤트 발동
        OnStateChanged?.Invoke(currentState);
    }

    /// <summary>
    /// 최종 범인 판정 결과
    /// </summary>
    public void EndGame(bool isVictory)
    {
        currentState = GameState.GameOver;
        if (isVictory)
        {
            // Debug.Log("수사 성공: 진범을 잡았습니다!");
        }
        else
        {
            // Debug.Log("수사 실패: 엉뚱한 사람을 지목했습니다...");
        }

        // 결과 UI 띄우기 (UIManager가 씬에 존재해야 함)
        if (UIManager.Instance != null)
        {
            UIManager.Instance.ShowEndingImage(isVictory);
        }
    }
}