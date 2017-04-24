using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudController : MonoBehaviour
{
    public float minSpeed;
    public float maxSpeed;

    private Vector2 _position;
    private float _speed;

    // Use this for initialization
    void Start()
    {
        _position = this.transform.position;
        _speed = Random.Range(minSpeed, maxSpeed);
    }

    // Update is called once per frame
    void Update()
    {
        _position += Vector2.left * Time.deltaTime * (ScrollManager.Instance.GetScrollSpeed() + _speed);
        this.transform.position = _position;
    }
}
