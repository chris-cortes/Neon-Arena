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

    public static bool isMapColorBlack = false;
    public static bool isMapColorBlue = false;
    public static bool isMapColorCyan = false;
    public static bool isMapColorGreen = false;
    public static bool isMapColorGrey = false;
    public static bool isMapColorMagenta = false;
    public static bool isMapColorRed = false;
    public static bool isMapColorWhite = false;
    public static bool isMapColorYellow = false;

    public static bool isGunGlowColorBlack = false;
    public static bool isGunGlowColorBlue = false;
    public static bool isGunGlowColorCyan = false;
    public static bool isGunGlowColorGreen = false;
    public static bool isGunGlowColorGrey = false;
    public static bool isGunGlowColorMagenta = false;
    public static bool isGunGlowColorRed = false;
    public static bool isGunGlowColorWhite = false;
    public static bool isGunGlowColorYellow = false;

    public static bool isGunColorBlack = false;
    public static bool isGunColorBlue = false;
    public static bool isGunColorCyan = false;
    public static bool isGunColorGreen = false;
    public static bool isGunColorGrey = false;
    public static bool isGunColorMagenta = false;
    public static bool isGunColorRed = false;
    public static bool isGunColorWhite = false;
    public static bool isGunColorYellow = false;

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
                totalDollarsText.text = "" + (totalDollars);
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
                totalDollarsText.text = "" + (totalDollars);
            }
        }

    }

    // Map Color Customization
    public void BlackMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorBlack == false)
            {
                FalseMapColors();
                isMapColorBlack = true;
                map.color = Color.black;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void BlueMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorBlue == false)
            {
                FalseMapColors();
                isMapColorBlue = true;
                map.color = Color.blue;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void CyanMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorCyan == false)
            {
                FalseMapColors();
                isMapColorCyan = true;
                map.color = Color.cyan;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreenMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorGreen == false)
            {
                FalseMapColors();
                isMapColorGreen = true;
                map.color = Color.green;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreyMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorGrey == false)
            {
                FalseMapColors();
                isMapColorGrey = true;
                map.color = Color.grey;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void MagentaMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorMagenta == false)
            {
                FalseMapColors();
                isMapColorMagenta = true;
                map.color = Color.magenta;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void RedMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorRed == false)
            {
                FalseMapColors();
                isMapColorRed = true;
                map.color = Color.red;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void WhiteMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorWhite == false)
            {
                FalseMapColors();
                isMapColorWhite = true;
                map.color = Color.white;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void YellowMapColor()
    {
        if(totalDollars >= 100)
        {
            if(isMapColorYellow == false)
            {
                FalseMapColors();
                isMapColorYellow = true;
                map.color = Color.yellow;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }

    // Gun Glow Color Customization
    public void BlackGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorBlack == false)
            {
                FalseGunGlowColors();
                isGunGlowColorBlack = true;
                gun.SetColor("_EmissionColor", Color.black);
                particles.SetColor("_EmissionColor", Color.black);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }

    }
    public void BlueGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorBlue == false)
            {
                FalseGunGlowColors();
                isGunGlowColorBlue = true;
                gun.SetColor("_EmissionColor", Color.blue);
                particles.SetColor("_EmissionColor", Color.blue);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void CyanGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorCyan == false)
            {
                FalseGunGlowColors();
                isGunGlowColorCyan = true;
                gun.SetColor("_EmissionColor", Color.cyan);
                particles.SetColor("_EmissionColor", Color.cyan);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreenGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorGreen == false)
            {
                FalseGunGlowColors();
                isGunGlowColorGreen = true;
                gun.SetColor("_EmissionColor", Color.green);
                particles.SetColor("_EmissionColor", Color.green);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreyGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorGrey == false)
            {
                FalseGunGlowColors();
                isGunGlowColorGrey = true;
                gun.SetColor("_EmissionColor", Color.grey);
                particles.SetColor("_EmissionColor", Color.grey);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void MagentaGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorMagenta == false)
            {
                FalseGunGlowColors();
                isGunGlowColorMagenta = true;
                gun.SetColor("_EmissionColor", Color.magenta);
                particles.SetColor("_EmissionColor", Color.magenta);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void RedGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorRed == false)
            {
                FalseGunGlowColors();
                isGunGlowColorRed = true;
                gun.SetColor("_EmissionColor", Color.red);
                particles.SetColor("_EmissionColor", Color.red);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void WhiteGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorWhite == false)
            {
                FalseGunGlowColors();
                isGunGlowColorWhite = true;
                gun.SetColor("_EmissionColor", Color.white);
                particles.SetColor("_EmissionColor", Color.white);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void YellowGunGlowColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunGlowColorYellow == false)
            {
                FalseGunGlowColors();
                isGunGlowColorYellow = true;
                gun.SetColor("_EmissionColor", Color.yellow);
                particles.SetColor("_EmissionColor", Color.yellow);
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }

    // Gun Color
    public void BlackGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorBlack == false)
            {
                FalseGunColors();
                isGunColorBlack = true;
                gun.color = Color.black;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }

    }
    public void BlueGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorBlue == false)
            {
                FalseGunColors();
                isGunColorBlue = true;
                gun.color = Color.blue;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void CyanGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorCyan == false)
            {
                FalseGunColors();
                isGunColorCyan = true;
                gun.color = Color.cyan;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreenGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorGreen == false)
            {
                FalseGunColors();
                isGunColorGreen = true;
                gun.color = Color.green;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void GreyGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorGrey == false)
            {
                FalseGunColors();
                isGunColorGrey = true;
                gun.color = Color.grey;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void MagentaGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorMagenta == false)
            {
                FalseGunColors();
                isGunColorMagenta = true;
                gun.color = Color.magenta;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void RedGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorRed == false)
            {
                FalseGunColors();
                isGunColorRed = true;
                gun.color = Color.red;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void WhiteGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorWhite == false)
            {
                FalseGunColors();
                isGunColorWhite = true;
                gun.color = Color.white;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }
    public void YellowGunColor()
    {
        if(totalDollars >= 100)
        {
            if(isGunColorYellow == false)
            {
                FalseGunColors();
                isGunColorYellow = true;
                gun.color = Color.yellow;
                totalDollars = totalDollars - 100;
                totalDollarsText.text = "" + (totalDollars);
            }
        }
    }

    // set the bools to false
    public void FalseMapColors()
    {
        isMapColorBlack = false;
        isMapColorBlue = false;
        isMapColorCyan = false;
        isMapColorGreen = false;
        isMapColorGrey = false;
        isMapColorMagenta = false;
        isMapColorRed = false;
        isMapColorWhite = false;
        isMapColorYellow = false;
    }
    public void FalseGunGlowColors()
    {
        isGunGlowColorBlack = false;
        isGunGlowColorBlue = false;
        isGunGlowColorCyan = false;
        isGunGlowColorGreen = false;
        isGunGlowColorGrey = false;
        isGunGlowColorMagenta = false;
        isGunGlowColorRed = false;
        isGunGlowColorWhite = false;
        isGunGlowColorYellow = false;
    }
    public void FalseGunColors()
    {
        isGunColorBlack = false;
        isGunColorBlue = false;
        isGunColorCyan = false;
        isGunColorGreen = false;
        isGunColorGrey = false;
        isGunColorMagenta = false;
        isGunColorRed = false;
        isGunColorWhite = false;
        isGunColorYellow = false;
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
