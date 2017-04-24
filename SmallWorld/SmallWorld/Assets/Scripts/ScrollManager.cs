using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollManager : MonoBehaviour
{
    private static ScrollManager _instance;
    public static ScrollManager Instance { get { return _instance; } }

    public float scrollAcceleration;

    private float _currentScrollSpeed = 0.0f;
    private float _scrollSpeed = 2.0f;
    private bool _stopScroll = false;

    private bool _lerpScroll = false;
    private float _lerpTime;
    private float _lerpElapsed = 0.0f;
    private AnimationCurve _lerpCurve;

    private void Awake()
    {
        if (_instance != null && _instance != this)
            Destroy(this.gameObject);
        else
            _instance = this;
    }

    public float GetScrollSpeed()
    {
        return _currentScrollSpeed;
    }

    public bool ScrollingStopped()
    {
        return _stopScroll;
    }

    public void StopScroll()
    {
        _stopScroll = true;
        _currentScrollSpeed = 0.0f;
    }

    public void ResumeScroll()
    {
        _stopScroll = false;
    }

    public void LerpStop(float t, AnimationCurve c)
    {
        _lerpScroll = true;
        _lerpTime = t;
        _lerpCurve = c;
    }
	
	// Update is called once per frame
	void Update ()
    {
        if(_lerpScroll)
        {
            _lerpElapsed += Time.deltaTime;

            if(_lerpElapsed < _lerpTime)
                _currentScrollSpeed = Mathf.Lerp(0.0f, _scrollSpeed, _lerpCurve.Evaluate(_lerpElapsed / _lerpTime));
            else
            {
                _lerpScroll = false;
                _lerpElapsed = 0.0f;
                _stopScroll = true;
                _currentScrollSpeed = 0.0f;
            }
        }
        if (!_stopScroll)
        {
            if (_currentScrollSpeed > _scrollSpeed)
                _currentScrollSpeed = _scrollSpeed;
            else if (_currentScrollSpeed < _scrollSpeed)
                _currentScrollSpeed += scrollAcceleration * Time.deltaTime;
        }
	}
}
