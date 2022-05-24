using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenu : MonoBehaviour
{
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
}
