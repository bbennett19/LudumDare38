using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public float transferRate = 50.0f;
    public float maxHoney;
    public float maxNectar;
    public float timeToMainScene = 3.0f;
    public AudioClip bearAudio;

    private float _elapsed = 0.0f;
    private float _honey = 0.0f;
    private float _nectar = 0.0f;
    
    public int State { get; set; }
    private static GameManager _instance;
    public static GameManager Instance { get { return _instance; } }
    public bool Pause { get; set; }
    

    private void Awake()
    {
        if (_instance != null && _instance != this)
            Destroy(this.gameObject);
        else
            _instance = this;

        DontDestroyOnLoad(this.gameObject);
        
    }

    private void Update()
    {
        if (_nectar == 0.0f && State == 1)
        {
            _elapsed += Time.deltaTime;

            if (_elapsed >= timeToMainScene)
            {
                _elapsed = 0.0f;

                if (_honey >= maxHoney)
                {
                    SceneManager.LoadScene("BearScene");
                    State = 2;
                    AudioSource s = GetComponent<AudioSource>();
                    s.Stop();
                    s.clip = bearAudio;
                    s.Play();
                }
                else
                {
                    SceneManager.LoadScene("Main");
                    State = 0;
                }
            }
        }

        float deltaNectar = transferRate * Time.deltaTime;
        
        if(_nectar - deltaNectar < 0.0f)
        {
            deltaNectar = _nectar;
        }

        _nectar -= deltaNectar;
        _honey += deltaNectar;
    }

    public void StopAudio()
    {
        GetComponent<AudioSource>().Stop();
    }

    public float NectarPercentage()
    {
        return _nectar / maxNectar;
    }

    public float HoneyPercentage()
    {
        return _honey / maxHoney;
    }

    public void AddNectar(float nectar)
    {
        _nectar += nectar;
    }

    public float GetNectar()
    {
        return _nectar;
    }

    public float GetHoney()
    {
        return _honey;
    }
}
