using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenu : MonoBehaviour
{
    int level = 1;

    public void StartButton()
    {
        SceneManager.LoadScene(level);
    }
}
