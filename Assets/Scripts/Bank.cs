using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bank : MonoBehaviour
{

    [SerializeField] int startingBalance = 150;
    [SerializeField] int currentBalance = 150;

    public int CurrentBalance { get { return currentBalance; } } //CurrentBalance must be accessed from elsewhere, too. 



    public void Deposit(int amount)
    {
        currentBalance += Mathf.Abs(amount);
    }  
    public void Withdraw(int amount)
    {
        currentBalance -= Mathf.Abs(amount);
    }
}