 // Zahin Roja
#include "Account.h"
#include <iostream>
using namespace std;

int Account::accountsCreated = 1000;

Account::Account()
{
    accountsCreated++;
    accountNumber = accountsCreated;
    balance = 0;
}
Account::Account(double bal)
{
      if (bal >= 0)
      {
        balance = bal;
      }
      else
      {
        bal = 0.0;
        cout << "The initial balance was invalid" << endl;
      }

}
void Account::deposit(double amt)
{
    accountNumber = amt;
    balance = balance + amt;
}
void Account::withdraw(double amt)
{
    if(amt > balance)
    {
        cout << "Debit amount exceeded account balance" << endl;
    }
}
double Account::getBalance()
{
    return balance;
}
Account Account::operator+(double amt)
{
    amt = amt + balance;
}
void Account::display()
{
    cout << "Regular Account: " << accountsCreated++ << " balance = $" << balance << endl;;
}
