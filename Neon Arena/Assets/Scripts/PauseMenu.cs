using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseMenu : MonoBehaviour
{
    public static bool isPaused = false;

    public GameObject pauseMenuUI;
    public GameObject crosshair;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            if(isPaused)
            {
                Resume();
            }
            else
            {
                pauseMenuUI.SetActive(true);
                crosshair.SetActive(false);
                Time.timeScale = 0;
                isPaused = true;
            }
        }

    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        crosshair.SetActive(true);
        Time.timeScale = 1;
        isPaused = false;
    }
}
