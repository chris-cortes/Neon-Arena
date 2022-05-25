using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsMenu : MonoBehaviour
{
    public Slider sensSlider;
    public Slider musicVolumeSlider;

    public AudioSource music;

    void Update()
    {

        musicVolumeSlider.value = StartMenu.musicVolume;
        music.volume = StartMenu.musicVolume;
    }
}
