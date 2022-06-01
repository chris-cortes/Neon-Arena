using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//got help from: https://answers.unity.com/questions/1173303/how-to-check-which-scene-is-loaded-and-write-if-co.html

public class Scene1_Score : MonoBehaviour
{
    public Text menuScore;
    public Text timerTextValue;
    private float seconds;
    static float s1Score = 0;
    string sceneName;

    void Start()
    {
        seconds = 0f;
        Scene currentScene = SceneManager.GetActiveScene();

        sceneName = currentScene.name;

        /*
        if (sceneName == "StartMenu")
        {
            menuScore.text = "" + 0.000000;
        }
        */
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(s1Score);

        if(sceneName == "Map1")
        {
            seconds += Time.deltaTime;
            timerTextValue.text = "" + (seconds);
        }
        

        if(seconds > s1Score)
        {
            s1Score = seconds;

            if(sceneName == "StartMenu")
            {
                string s1ScoreStr = s1Score.ToString();
                if(menuScore.text != s1ScoreStr)
                {
                    menuScore.text = s1ScoreStr;
                }
                
            }
        }
    }
}
