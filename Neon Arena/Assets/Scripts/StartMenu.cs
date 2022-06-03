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

    public Material map;
    public Material gun;
    public Material particles;

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
            if(isMap2Locked == true)
            {
                isMap2Locked = false;
                totalDollars = totalDollars - 500;
            }

        }
    }
    public void BuyMap3()
    {
        if(totalDollars >= 500)
        {
            if(isMap3Locked == true)
            {
                isMap3Locked = false;
                totalDollars = totalDollars - 500;
            }
        }

    }

    // Map Color Customization
    public void BlackMapColor()
    {
        map.color = Color.black;
    }
    public void BlueMapColor()
    {
        map.color = Color.blue;
    }
    public void CyanMapColor()
    {
        map.color = Color.cyan;
    }
    public void GreenMapColor()
    {
        map.color = Color.green;
    }
    public void GreyMapColor()
    {
        map.color = Color.grey;
    }
    public void MagentaMapColor()
    {
        map.color = Color.magenta;
    }
    public void RedMapColor()
    {
        map.color = Color.red;
    }
    public void WhiteMapColor()
    {
        map.color = Color.white;
    }
    public void YellowMapColor()
    {
        map.color = Color.yellow;
    }

    // Gun Glow Color Customization
    public void BlackGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.black);
        particles.SetColor("_EmissionColor", Color.black);
    }
    public void BlueGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.blue);
        particles.SetColor("_EmissionColor", Color.blue);
    }
    public void CyanGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.cyan);
        particles.SetColor("_EmissionColor", Color.cyan);
    }
    public void GreenGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.green);
        particles.SetColor("_EmissionColor", Color.green);
    }
    public void GreyGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.grey);
        particles.SetColor("_EmissionColor", Color.grey);
    }
    public void MagentaGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.magenta);
        particles.SetColor("_EmissionColor", Color.magenta);
    }
    public void RedGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.red);
        particles.SetColor("_EmissionColor", Color.red);
    }
    public void WhiteGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.white);
        particles.SetColor("_EmissionColor", Color.white);
    }
    public void YellowGunGlowColor()
    {
        gun.SetColor("_EmissionColor", Color.yellow);
        particles.SetColor("_EmissionColor", Color.yellow);
    }

    // Gun Color
    public void BlackGunColor()
    {
        gun.color = Color.black;
    }
    public void BlueGunColor()
    {
        gun.color = Color.blue;
    }
    public void CyanGunColor()
    {
        gun.color = Color.cyan;
    }
    public void GreenGunColor()
    {
        gun.color = Color.green;
    }
    public void GreyGunColor()
    {
        gun.color = Color.grey;
    }
    public void MagentaGunColor()
    {
        gun.color = Color.magenta;
    }
    public void RedGunColor()
    {
        gun.color = Color.red;
    }
    public void WhiteGunColor()
    {
        gun.color = Color.white;
    }
    public void YellowGunColor()
    {
        gun.color = Color.yellow;
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
