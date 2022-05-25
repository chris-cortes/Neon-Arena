using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool isPaused = false;

    public GameObject pauseMenuUI;
    public GameObject shopMenuUI;
    public GameObject UICanvas;
    public GameObject crosshair;

    int level = 1;

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
                //UICanvas.SetActive(false);
                Time.timeScale = 0;
                isPaused = true;
            }
        }

    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        shopMenuUI.SetActive(false);
        crosshair.SetActive(true);
        //UICanvas.SetActive(true);
        Time.timeScale = 1;
        isPaused = false;
    }

    public void RestartButton()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        Resume();
    }
}
