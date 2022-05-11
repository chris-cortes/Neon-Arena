using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    public float fadeDuration = 1f;
    public GameObject enemy;
    public float PlayerHealth = 100f;

    public CanvasGroup exitBackgroundImageCanvasGroup;
    public Canvas DisableThisUI;

    public Slider healthBar;

    bool m_IsPlayerDead;
    float m_Timer;

    void Start()
    {
        //set max health
        healthBar.maxValue = PlayerHealth;
        healthBar.value = PlayerHealth;
    }

    public void PlayerTakeDamage(float damage)
    {
        PlayerHealth -= damage;
        Debug.Log("Player Health is now: " + PlayerHealth);
        // set health
        healthBar.value = PlayerHealth;

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
    }

    void EndLevel()
    {
        m_Timer += Time.deltaTime;

        exitBackgroundImageCanvasGroup.alpha = m_Timer / fadeDuration;
    }
}
