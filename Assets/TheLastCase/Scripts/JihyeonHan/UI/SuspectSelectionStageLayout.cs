using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

// Places the suspect lineup in front of the tracked AR camera and tries to recover tracking after scene changes.
public class SuspectSelectionStageLayout : MonoBehaviour
{
    [Header("Camera Anchor")]
    [SerializeField] private Transform cameraTransform;

    [Header("Character Roots")]
    [SerializeField] private Transform suspectA;
    [SerializeField] private Transform suspectB;
    [SerializeField] private Transform suspectC;
    [SerializeField] private Transform detective;

    [Header("Layout")]
    [SerializeField] private float suspectDistance = 2f;
    [SerializeField] private float detectiveDistance = 2.3f;
    [SerializeField] private float characterHeightOffset = -1.2f;
    [SerializeField] private float suspectSpreadAngle = 18f;
    [SerializeField] private float detectiveAngle = 75f;
    [SerializeField] private bool faceCameraOnSpawn = true;
    [SerializeField] private bool addAnchorAfterTracking = true;
    [SerializeField] private bool restartArStackOnStart = true;
    [SerializeField] private float trackingWaitSeconds = 2.5f;

    private ARSession arSession;
    private ARInputManager arInputManager;
    private InputActionManager inputActionManager;
    private TrackedPoseDriver trackedPoseDriver;
    private ARCameraManager arCameraManager;
    private ARPlaneManager arPlaneManager;
    private ARRaycastManager arRaycastManager;

    private IEnumerator Start()
    {
        Transform anchor = null;
        while ((anchor = ResolveAnchor()) == null)
        {
            yield return null;
        }

        // Scene-to-scene AR transitions are the fragile part, so we gather the AR stack before placement begins.
        ResolveArComponents(anchor);

        if (restartArStackOnStart)
        {
            yield return RestartArStack();
        }

        yield return WaitForTracking();
        anchor = ResolveAnchor();

        if (anchor == null)
        {
            yield break;
        }

        PlaceCharacters(anchor);

        if (addAnchorAfterTracking && IsTrackingReady())
        {
            AttachAnchor(suspectA);
            AttachAnchor(suspectB);
            AttachAnchor(suspectC);
            AttachAnchor(detective);
        }
    }

    private void ResolveArComponents(Transform anchor)
    {
        if (arSession == null)
        {
            arSession = Object.FindAnyObjectByType<ARSession>();
        }

        if (arInputManager == null)
        {
            arInputManager = Object.FindAnyObjectByType<ARInputManager>();
        }

        if (inputActionManager == null)
        {
            inputActionManager = Object.FindAnyObjectByType<InputActionManager>();
        }

        if (arPlaneManager == null)
        {
            arPlaneManager = Object.FindAnyObjectByType<ARPlaneManager>();
        }

        if (arRaycastManager == null)
        {
            arRaycastManager = Object.FindAnyObjectByType<ARRaycastManager>();
        }

        if (anchor != null)
        {
            if (trackedPoseDriver == null)
            {
                trackedPoseDriver = anchor.GetComponent<TrackedPoseDriver>();
            }

            if (arCameraManager == null)
            {
                arCameraManager = anchor.GetComponent<ARCameraManager>();
            }
        }
    }

    private Transform ResolveAnchor()
    {
        if (cameraTransform != null)
        {
            return cameraTransform;
        }

        Camera mainCamera = Camera.main;
        return mainCamera != null ? mainCamera.transform : null;
    }

    private static bool IsTrackingReady()
    {
        return ARSession.state == ARSessionState.SessionTracking;
    }

    private IEnumerator RestartArStack()
    {
        // Toggling the AR-related managers can help the camera pose recover after loading from another AR scene.
        SetArComponentsEnabled(false);
        yield return null;

        SetArComponentsEnabled(true);
        yield return null;

        if (arSession != null)
        {
            arSession.Reset();
        }
    }

    private IEnumerator WaitForTracking()
    {
        // Placement is delayed until tracking is live so the suspects stay in world space instead of screen space.
        float deadline = Time.unscaledTime + Mathf.Max(0.1f, trackingWaitSeconds);
        while (!IsTrackingReady() && Time.unscaledTime < deadline)
        {
            yield return null;
        }

        if (IsTrackingReady())
        {
            // Let the camera transform consume one tracked frame before placing content.
            yield return null;
            yield break;
        }

        if (restartArStackOnStart && arSession != null)
        {
            yield return RestartArStack();

            deadline = Time.unscaledTime + Mathf.Max(0.1f, trackingWaitSeconds);
            while (!IsTrackingReady() && Time.unscaledTime < deadline)
            {
                yield return null;
            }
        }

        if (IsTrackingReady())
        {
            yield return null;
        }
        else
        {
            Debug.LogWarning(
                $"SuspectSelectionStageLayout could not restore AR tracking before placement. Current state: {ARSession.state}",
                this);
        }
    }

    private void SetArComponentsEnabled(bool enabled)
    {
        if (arRaycastManager != null)
        {
            arRaycastManager.enabled = enabled;
        }

        if (arPlaneManager != null)
        {
            arPlaneManager.enabled = enabled;
        }

        if (arCameraManager != null)
        {
            arCameraManager.enabled = enabled;
        }

        if (trackedPoseDriver != null)
        {
            trackedPoseDriver.enabled = enabled;
        }

        if (inputActionManager != null)
        {
            inputActionManager.enabled = enabled;
        }

        if (arInputManager != null)
        {
            arInputManager.enabled = enabled;
        }

        if (arSession != null)
        {
            arSession.enabled = enabled;
        }
    }

    private void PlaceCharacters(Transform anchor)
    {
        PlaceCharacter(suspectA, anchor, -suspectSpreadAngle, suspectDistance);
        PlaceCharacter(suspectB, anchor, 0f, suspectDistance);
        PlaceCharacter(suspectC, anchor, suspectSpreadAngle, suspectDistance);
        PlaceCharacter(detective, anchor, detectiveAngle, detectiveDistance);
    }

    private void PlaceCharacter(Transform characterRoot, Transform anchor, float yawOffset, float distance)
    {
        if (characterRoot == null)
        {
            return;
        }

        // Ignore camera pitch so the lineup spreads around the player on the horizontal plane.
        Vector3 forward = anchor.forward;
        forward.y = 0f;
        forward = forward.sqrMagnitude < 0.001f ? Vector3.forward : forward.normalized;

        Quaternion rotationOffset = Quaternion.AngleAxis(yawOffset, Vector3.up);
        Vector3 direction = rotationOffset * forward;

        Vector3 position = anchor.position + direction * distance;
        position.y += characterHeightOffset;
        characterRoot.position = position;

        if (faceCameraOnSpawn)
        {
            Vector3 lookDirection = anchor.position - characterRoot.position;
            lookDirection.y = 0f;

            if (lookDirection.sqrMagnitude > 0.001f)
            {
                characterRoot.rotation = Quaternion.LookRotation(lookDirection.normalized, Vector3.up);
            }
        }
    }

    private static void AttachAnchor(Transform characterRoot)
    {
        if (characterRoot == null || characterRoot.GetComponent<ARAnchor>() != null)
        {
            return;
        }

        // Anchoring the root asks AR Foundation to keep the placed character stable in the world.
        characterRoot.gameObject.AddComponent<ARAnchor>();
    }
}
