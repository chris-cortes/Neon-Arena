using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RestartGame : MonoBehaviour
{

  int level = 1;

  public void RestartButton()
  {
      SceneManager.LoadScene(level);
  }
}
