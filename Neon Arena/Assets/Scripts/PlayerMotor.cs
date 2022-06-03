// https://www.youtube.com/watch?v=rJqP5EesxLk

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMotor : MonoBehaviour
{
    private CharacterController controller;
    private Vector3 playerVelocity;
    private bool isGrounded;

    private float speed = 5f;
    private float gravity = -20f;
    private float jumpHeight = .75f;
    public bool isSprinting = false;
    private Image walkImage;
    private Image sprintImage;
    public GameObject walkIcon;
    public GameObject sprintIcon;

    public static float walkSpeed = 5f;
    public static float runSpeed = 10f;
    public static float newJumpHeight = .75f;

    void Start()
    {
        controller = GetComponent<CharacterController>();


        walkImage = walkIcon.GetComponent<Image>();
        sprintImage = sprintIcon.GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        isGrounded = controller.isGrounded;

        if (isSprinting)
        {
            speed = runSpeed;
        }
        else if(isGrounded)
        {
            speed = walkSpeed;
        }
    }

    // Recieve inputs from our InputManager and apply them to our CharacterController
    public void ProcessMove(Vector2 input)
    {
        Vector3 moveDirection = Vector3.zero;
        moveDirection.x = input.x;
        moveDirection.z = input.y;
        controller.Move(transform.TransformDirection(moveDirection) * speed * Time.deltaTime);
        playerVelocity.y += gravity * Time.deltaTime;
        if(isGrounded && playerVelocity.y < 0)
        {
            playerVelocity.y = -2f;
        }
        controller.Move(playerVelocity * Time.deltaTime);
    }

    public void Jump()
    {
        if(isGrounded)
        {
            playerVelocity.y = Mathf.Sqrt(jumpHeight * -3.0f * gravity);
        }
    }

    public void SprintPressed()
    {
        isSprinting = true;
        walkImage.enabled = false;
        sprintImage.enabled = true;
    }

    public void SprintReleased()
    {
        isSprinting = false;
        sprintImage.enabled = false;
        walkImage.enabled = true;
    }
}
