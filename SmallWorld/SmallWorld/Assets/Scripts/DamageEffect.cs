using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageEffect : MonoBehaviour
{
    public float invincibleTime = 4.0f;
    public float blinkInterval = 0.25f;

    private bool _invincible = false;
    private float _invincibleElapsed = 0.0f;
    private float _blinkTimer = 0.0f;
    private Renderer _renderer;

    // Use this for initialization
    void Start ()
    {
        _renderer = gameObject.GetComponent<Renderer>();
	}
	
	// Update is called once per frame
	void Update ()
    {
	    if(_invincible)
        {
            _blinkTimer += Time.deltaTime;
            _invincibleElapsed += Time.deltaTime;

            if (_blinkTimer >= blinkInterval)
            {
                _renderer.enabled = !_renderer.enabled;
                _blinkTimer = 0.0f;
            }

            if(_invincibleElapsed >= invincibleTime)
            {
                _invincible = false;
                _renderer.enabled = true;
                _invincibleElapsed = 0.0f;
                _blinkTimer = 0.0f;
            }
        }
	}

    public bool Invincible()
    {
        return _invincible;
    }

    public void MakeInvincible()
    {
        _invincible = true;
    }
}
