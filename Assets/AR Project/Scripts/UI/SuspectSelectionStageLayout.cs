using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

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
            arSession = FindObjectOfType<ARSession>();
        }

        if (arInputManager == null)
        {
            arInputManager = FindObjectOfType<ARInputManager>();
        }

        if (inputActionManager == null)
        {
            inputActionManager = FindObjectOfType<InputActionManager>();
        }

        if (arPlaneManager == null)
        {
            arPlaneManager = FindObjectOfType<ARPlaneManager>();
        }

        if (arRaycastManager == null)
        {
            arRaycastManager = FindObjectOfType<ARRaycastManager>();
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

        characterRoot.gameObject.AddComponent<ARAnchor>();
    }
}
