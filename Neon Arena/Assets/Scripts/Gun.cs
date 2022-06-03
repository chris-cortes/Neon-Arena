using UnityEngine;
using UnityEngine.UI;

//Followed tutorial at: https://www.youtube.com/watch?v=THnivyG0Mvo

public class Gun : MonoBehaviour
{
    public float damage = 10f;
    public float range = 100f;
    public static float PlayerShield = 0f;

    public Camera fpsCam;
    public GameObject impactEffect;

    public AudioSource shootingSound;

    public Text dollarText;
    private float dollars = 0.00f;

    public Image shieldBar;

    private bool boughtOneShot = false;
    private bool boughtIncreaseSpeed = false;
    private bool boughtIncreaseJumpHeight = false;

    // Update is called once per frame
    private void Update()
    {
        if(Input.GetButtonDown("Fire"))
        {
            Shoot();
            shootingSound.volume = 0.25f;
            shootingSound.Play();
        }
    }

    private void Shoot()
    {
        RaycastHit hit;
        if(Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit, range))
        {
            Debug.Log(hit.transform.name);
            EnemyAI target = hit.transform.GetComponent<EnemyAI>();
            if (target != null)
            {
                int enemydead = 0;
                enemydead = target.TakeDamage(damage);

                if (enemydead == 1)
                {
                    dollars += 50.00f;
                    dollarText.text = "" + (dollars);
                    StartMenu.totalDollars += 50.00f;
                }
            }

            GameObject impactGo = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
            Destroy(impactGo, 1f);
        }
    }



    public void OneShotKill()
    {
        if(dollars >= 200f)
        {
            if (!boughtOneShot)
            {
                boughtOneShot = true;
                dollars = dollars - 200f;
                StartMenu.totalDollars = StartMenu.totalDollars - 200f;
                dollarText.text = "" + (dollars);
                damage = 1000f;
            }
        }
    }

    public void Shields()
    {
        if(dollars >= 100f)
        {
            if (PlayerShield != 100f)
            {
                dollars = dollars - 100f;
                StartMenu.totalDollars = StartMenu.totalDollars - 100f;
                dollarText.text = "" + (dollars);
                PlayerShield = 100f;
                shieldBar.fillAmount = PlayerShield/100f;
            }
        }
    }

    public void IncreaseSpeed()
    {
        if(dollars >= 100f)
        {
            if (!boughtIncreaseSpeed)
            {
                boughtIncreaseSpeed = true;
                dollars = dollars - 100f;
                StartMenu.totalDollars = StartMenu.totalDollars - 100f;
                dollarText.text = "" + (dollars);
                PlayerMotor.walkSpeed = 8f;
                PlayerMotor.runSpeed = 15f;
            }
        }
    }

    public void IncreaseJumpHeight()
    {
        if(dollars >= 100f)
        {
            if (!boughtIncreaseJumpHeight)
            {
                boughtIncreaseJumpHeight = true;
                dollars = dollars - 100f;
                StartMenu.totalDollars = StartMenu.totalDollars - 100f;
                dollarText.text = "" + (dollars);
                PlayerMotor.newJumpHeight = 1.5f;
            }
        }
    }
}
