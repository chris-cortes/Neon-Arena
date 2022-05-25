using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{
    public static bool isPaused = false;

    public GameObject pauseMenuUI;
    public GameObject shopMenuUI;
    public GameObject UICanvas;
    public GameObject crosshair;

    public Slider sensSlider;
    public Slider musicVolumeSlider;

    public AudioSource music;

    int level = 1;

    void Start()
    {
        Resume();
    }

    // Update is called once per frame
    void Update()
    {

        sensSlider.value = StartMenu.sens;
        musicVolumeSlider.value = StartMenu.musicVolume;
        music.volume = StartMenu.musicVolume;


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

    public void QuitButton()
    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1;
    }

    public void MusicVolume(Slider slider)
    {
        StartMenu.musicVolume = slider.value;
    }

}
