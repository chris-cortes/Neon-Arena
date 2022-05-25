using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenu : MonoBehaviour
{
    public static float sens = 15f;
    public static float musicVolume = 0.03f;

    public Slider sensSlider;

    public AudioSource music;

    void Update()
    {
        music.volume = musicVolume;
        sensSlider.value = StartMenu.sens;
    }

    public void MapStart1()
    {
        SceneManager.LoadScene(1);
    }

    public void MapStart2()
    {
        SceneManager.LoadScene(2);
    }

    public void MapStart3()
    {
        SceneManager.LoadScene(3);
    }

    public void RangeStart()
    {
        SceneManager.LoadScene(4);
    }

    public void MusicVolume(Slider slider)
    {
        musicVolume = slider.value;
    }

    public void ChangeSensitivity(Slider slider)
    {
        StartMenu.sens = slider.value;
    }
}
