using System;
using System.Collections.Generic;
using UnityEngine;

public enum AudioCue
{
    UiClick,
    EvidenceCollected,
    EvidenceCollectFailed
}

public enum BgmCue
{
    MainMenu,
    Story,
    CrimeScene,
    BadEnding,
    TrueEnding
}

[Serializable]
public class AudioCueClip
{
    public AudioCue cue;
    public AudioClip clip;
}

[Serializable]
public class BgmCueClip
{
    public BgmCue cue;
    public AudioClip clip;
}

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance { get; private set; }

    [Header("Audio Sources")]
    [SerializeField] private AudioSource bgmSource;
    [SerializeField] private AudioSource sfxSource;

    [Header("Clip Library")]
    [SerializeField] private List<AudioCueClip> sfxClips = new List<AudioCueClip>();
    [SerializeField] private List<BgmCueClip> bgmClips = new List<BgmCueClip>();

    [Header("Volume")]
    [Range(0f, 1f)]
    [SerializeField] private float bgmVolume = 0.6f;
    [Range(0f, 1f)]
    [SerializeField] private float sfxVolume = 1f;

    private readonly Dictionary<AudioCue, AudioClip> sfxLookup = new Dictionary<AudioCue, AudioClip>();
    private readonly Dictionary<BgmCue, AudioClip> bgmLookup = new Dictionary<BgmCue, AudioClip>();

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        EnsureAudioSources();
        RebuildLookups();
        ApplyVolumes();
    }

    private void OnValidate()
    {
        ApplyVolumes();
    }

    public void PlaySfx(AudioCue cue)
    {
        if (sfxSource == null)
        {
            return;
        }

        if (!TryGetSfxClip(cue, out AudioClip clip))
        {
            Debug.LogWarning($"No SFX clip assigned for cue {cue}.", this);
            return;
        }

        sfxSource.PlayOneShot(clip, sfxVolume);
    }

    public void PlayBgm(BgmCue cue, bool restartIfSame = false)
    {
        if (bgmSource == null)
        {
            return;
        }

        if (!TryGetBgmClip(cue, out AudioClip clip))
        {
            Debug.LogWarning($"No BGM clip assigned for cue {cue}.", this);
            return;
        }

        if (!restartIfSame && bgmSource.isPlaying && bgmSource.clip == clip)
        {
            return;
        }

        bgmSource.clip = clip;
        bgmSource.loop = true;
        bgmSource.volume = bgmVolume;
        bgmSource.Play();
    }

    public void StopBgm()
    {
        if (bgmSource != null)
        {
            bgmSource.Stop();
        }
    }

    public void PlayUiClick()
    {
        PlaySfx(AudioCue.UiClick);
    }

    public void PlayEvidenceCollected()
    {
        PlaySfx(AudioCue.EvidenceCollected);
    }

    public void PlayEvidenceCollectFailed()
    {
        PlaySfx(AudioCue.EvidenceCollectFailed);
    }

    private bool TryGetSfxClip(AudioCue cue, out AudioClip clip)
    {
        if (sfxLookup.Count == 0)
        {
            RebuildLookups();
        }

        return sfxLookup.TryGetValue(cue, out clip);
    }

    private bool TryGetBgmClip(BgmCue cue, out AudioClip clip)
    {
        if (bgmLookup.Count == 0)
        {
            RebuildLookups();
        }

        return bgmLookup.TryGetValue(cue, out clip);
    }

    private void EnsureAudioSources()
    {
        if (bgmSource == null)
        {
            bgmSource = gameObject.AddComponent<AudioSource>();
            bgmSource.playOnAwake = false;
            bgmSource.loop = true;
        }

        if (sfxSource == null)
        {
            sfxSource = gameObject.AddComponent<AudioSource>();
            sfxSource.playOnAwake = false;
            sfxSource.loop = false;
        }
    }

    private void RebuildLookups()
    {
        sfxLookup.Clear();
        bgmLookup.Clear();

        foreach (AudioCueClip entry in sfxClips)
        {
            if (entry == null || entry.clip == null)
            {
                continue;
            }

            sfxLookup[entry.cue] = entry.clip;
        }

        foreach (BgmCueClip entry in bgmClips)
        {
            if (entry == null || entry.clip == null)
            {
                continue;
            }

            bgmLookup[entry.cue] = entry.clip;
        }
    }

    private void ApplyVolumes()
    {
        if (bgmSource != null)
        {
            bgmSource.volume = bgmVolume;
        }

        if (sfxSource != null)
        {
            sfxSource.volume = sfxVolume;
        }
    }
}
