﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NewDayNectar : MonoBehaviour
{
    public float maxWidth;

    private Image _nectarImage;

    // Use this for initialization
    void Start ()
    {
        _nectarImage = gameObject.GetComponent<Image>();
        _nectarImage.rectTransform.sizeDelta = new Vector2(0f, _nectarImage.rectTransform.sizeDelta.y);
    }
	
	// Update is called once per frame
	void Update ()
    {
        _nectarImage.rectTransform.sizeDelta = new Vector2(GameManager.Instance.NectarPercentage() * maxWidth, _nectarImage.rectTransform.sizeDelta.y);
    }
}
