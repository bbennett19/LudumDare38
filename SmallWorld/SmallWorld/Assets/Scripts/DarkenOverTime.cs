using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DarkenOverTime : MonoBehaviour
{
    public Color finalColor;
    public AnimationCurve rate;
    private SpriteRenderer[] _renderers;
    private Color _initialColor;

	// Use this for initialization
	void Start ()
    {
        _renderers = gameObject.GetComponentsInChildren<SpriteRenderer>();
        _initialColor = Color.white;
	}
	
	// Update is called once per frame
	void Update ()
    {
        float t = rate.Evaluate(TimeOfDayManager.Instance.DayCompletePercentage());

        for(int i = 0; i < _renderers.Length; i++)
            _renderers[i].color = Color.Lerp(_initialColor, finalColor, t);	
	}
}
