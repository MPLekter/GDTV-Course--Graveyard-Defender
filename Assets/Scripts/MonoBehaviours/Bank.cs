using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class Bank : MonoBehaviour
{

    [SerializeField] int startingBalance = 150;
    [SerializeField] int currentBalance = 150;
    TMP_Text displayedBalance;
    GameObject UI;

    public int CurrentBalance { get { return currentBalance; } } //CurrentBalance must be accessed from elsewhere, too. 

    void Start()
    {
        UI = GameObject.FindWithTag("UI-Text");
        //Debug.Log(UI.name);
        displayedBalance = UI.GetComponent<TMP_Text>();
        displayedBalance.text = "Gold " + startingBalance.ToString();
    }
    void Update()
    {
        UpdateTextUI();
    }

    private void UpdateTextUI()
    {
        displayedBalance.text = "Gold " + currentBalance.ToString();
    }

    public void Deposit(int amount)
    {
        currentBalance += Mathf.Abs(amount);
    }  
    public void Withdraw(int amount)
    {
        currentBalance -= Mathf.Abs(amount);

        if (currentBalance < 0)
        {
            ReloadScene();
        }
    }

    void ReloadScene()
    {
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(currentScene.buildIndex); 
    }
}