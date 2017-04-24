using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeOfDayManager : MonoBehaviour
{
    public float timePerDay;

    private float _elapsedTime;
    private bool _startTimer = false;

    private static TimeOfDayManager _instance;
    public static TimeOfDayManager Instance { get { return _instance; } }

    private void Awake()
    {
        if (_instance != null && _instance != this)
            Destroy(this.gameObject);
        else
            _instance = this;
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (_startTimer)
        {
            _elapsedTime += Time.deltaTime;
        }
	}

    public void StartDay()
    {
        _startTimer = true;
    }

    public float DayCompletePercentage()
    {
        return _elapsedTime / timePerDay;
    }
}
