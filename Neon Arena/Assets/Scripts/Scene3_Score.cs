using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//got help from: https://answers.unity.com/questions/1173303/how-to-check-which-scene-is-loaded-and-write-if-co.html
//got seconds help from: https://answers.unity.com/questions/1038757/how-to-make-a-timer-that-counts-up-in-seconds-as-a.html

public class Scene3_Score : MonoBehaviour
{
    public Text menuScore;
    public Text timerTextValue;
    private float timer;
    private int seconds;
    static int s3Score = 0;
    string sceneName;
    private GameObject player;

    void Start()
    {
        timer = 0f;
        Scene currentScene = SceneManager.GetActiveScene();

        sceneName = currentScene.name;
    }

    // Update is called once per frame
    void Update()
    {

        if (sceneName == "Map3")
        {
            player = GameObject.FindGameObjectWithTag("Player");

            if ((player.GetComponent<GameOver>().PlayerHealth) > 0f)
            {
                //Debug.Log(s1Score);
                timer += Time.deltaTime;
                seconds = (int)timer;
                timerTextValue.text = "" + (seconds);

                if (seconds > s3Score)
                {
                    s3Score = seconds;
                }
            }

        }


        if (sceneName == "StartMenu")
        {
            //Debug.Log("In Start Menu");
            string s3ScoreStr = s3Score.ToString();
            if (menuScore.text != s3ScoreStr)
            {
                menuScore.text = s3ScoreStr;
                //Debug.Log("UPDATED SCORE");
            }
        }
    }
}
