using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BirdController : MonoBehaviour
{
    public float minSpeed;
    public float maxSpeed;
    public float minFrequency;
    public float maxFrequency;
    public float minMagnitude;
    public float maxMagnitude;
    private Vector2 _position;
    private float _speed;
    private float _frequency;
    private float _magnitude;

	// Use this for initialization
	void Start ()
    {
        _position = this.transform.position;
        _speed = Random.Range(minSpeed, maxSpeed);
        _frequency = Random.Range(minFrequency, maxFrequency);
        _magnitude = Random.Range(minMagnitude, maxMagnitude);
	}
	
	// Update is called once per frame
	void Update ()
    {
        _position += Vector2.left * Time.deltaTime * (ScrollManager.Instance.GetScrollSpeed() + _speed);
        transform.position = _position + Vector2.up * Mathf.Sin(Time.time * _frequency) * _magnitude;
	}
}
