using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenu : MonoBehaviour
{
    public static float sens = 15f;
    public static float musicVolume = 0.03f;
    public static float totalDollars = 0f;

    public static bool isMap2Locked = true;
    public static bool isMap3Locked = true;

    public Text totalDollarsText;

    public RawImage lock2;
    public RawImage lock3;

    public Slider sensSlider;

    public AudioSource music;

    void Update()
    {
        music.volume = musicVolume;
        sensSlider.value = StartMenu.sens;
        lock2.enabled = isMap2Locked;
        lock3.enabled = isMap3Locked;
        totalDollarsText.text = "" + (totalDollars);
    }

    // Map Loaders
    public void MapStart1()
    {
        SceneManager.LoadScene(1);
    }
    public void MapStart2()
    {
        if(isMap2Locked == false)
        {
            SceneManager.LoadScene(2);
        }
    }
    public void MapStart3()
    {
      if(isMap3Locked == false)
      {
          SceneManager.LoadScene(3);
      }
    }
    public void RangeStart()
    {
        SceneManager.LoadScene(4);
    }

    // Map Purchase
    public void BuyMap2()
    {
        if(totalDollars >= 500)
        {
            isMap2Locked = false;
            totalDollars = totalDollars - 500;
        }
    }
    public void BuyMap3()
    {
        if(totalDollars >= 500)
        {
            isMap3Locked = false;
            totalDollars = totalDollars - 500;
        }
    }

    // Settings Sliders
    public void MusicVolume(Slider slider)
    {
        musicVolume = slider.value;
    }
    public void ChangeSensitivity(Slider slider)
    {
        StartMenu.sens = slider.value;
    }
}
