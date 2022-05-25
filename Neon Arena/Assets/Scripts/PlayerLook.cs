// https://www.youtube.com/watch?v=rJqP5EesxLk
// https://www.youtube.com/watch?v=TjwI3kqWQWw

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerLook : MonoBehaviour
{
    public Camera cam;
    private float xRotation = 0f;

    void Update()
    {
        if(PauseMenu.isPaused)
        {
          Cursor.lockState = CursorLockMode.None;
          Cursor.visible = true;
        }
        else
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
    }

    public void ProcessLook(Vector2 input)
    {
        float mouseX = input.x;
        float mouseY = input.y;

        xRotation -= (mouseY * Time.deltaTime) * StartMenu.sens;
        xRotation = Mathf.Clamp(xRotation, -80f, 80f);

        cam.transform.localRotation = Quaternion.Euler(xRotation, 0, 0);

        transform.Rotate(Vector3.up * (mouseX * Time.deltaTime) * StartMenu.sens);
    }

    public void ChangeSensitivity(Slider slider)
    {
        StartMenu.sens = slider.value;
    }
}
