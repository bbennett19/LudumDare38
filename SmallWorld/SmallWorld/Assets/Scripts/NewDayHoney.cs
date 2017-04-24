using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NewDayHoney : MonoBehaviour
{
    public float maxWidth;

    private Image _honeyImage;

    // Use this for initialization
    void Start ()
    {
        _honeyImage = gameObject.GetComponent<Image>();
        _honeyImage.rectTransform.sizeDelta = new Vector2(0f, _honeyImage.rectTransform.sizeDelta.y);
    }
	
	// Update is called once per frame
	void Update ()
    {
        _honeyImage.rectTransform.sizeDelta = new Vector2(GameManager.Instance.HoneyPercentage() * maxWidth, _honeyImage.rectTransform.sizeDelta.y);
    }
}
