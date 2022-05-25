using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//used this tutorial for showing player damage https://www.youtube.com/watch?v=d9FaI28Yf9A

public class GameOver : MonoBehaviour
{
    public float fadeDuration = 1f;
    public GameObject enemy;
    public GameObject GotHitScreen;
    public float PlayerHealth = 100f;


    public CanvasGroup exitBackgroundImageCanvasGroup;
    public Canvas DisableThisUI;

    public Image healthBar;
    public Image shieldBar;

    bool m_IsPlayerDead;
    float m_Timer;

    void Start()
    {
        //set max health
        PlayerHealth = 100f;
        Gun.PlayerShield = 0f;
        healthBar.fillAmount = PlayerHealth/100f;
        shieldBar.fillAmount = 0f;
    }

    public void PlayerTakeDamage(float damage)
    {
        if (Gun.PlayerShield > 0f)
        {
            var color = GotHitScreen.GetComponent<Image>().color;
            color.a = 0.8f;

            GotHitScreen.GetComponent<Image>().color = color;

            Gun.PlayerShield -= damage;
            Debug.Log("Player Shield is now: " + Gun.PlayerShield);

            // set health
            shieldBar.fillAmount = Gun.PlayerShield/100f;
        }

        else
        {
            var color = GotHitScreen.GetComponent<Image>().color;
            color.a = 0.8f;

            GotHitScreen.GetComponent<Image>().color = color;

            PlayerHealth -= damage;
            Debug.Log("Player Health is now: " + PlayerHealth);

            // set health
            healthBar.fillAmount = PlayerHealth/100f;
        }
    }

    void Update()
    {
        if (PlayerHealth <= 0f)
        {
            EndLevel();
            DisableThisUI.enabled = false;
            if (Input.GetKeyDown(KeyCode.R))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }

        if(GotHitScreen.GetComponent<Image>().color.a > 0)
        {
            var color = GotHitScreen.GetComponent<Image>().color;
            color.a -= 0.005f;
            GotHitScreen.GetComponent<Image>().color = color;
        }
    }

    void EndLevel()
    {
        m_Timer += Time.deltaTime;

        exitBackgroundImageCanvasGroup.alpha = m_Timer / fadeDuration;
    }
}
