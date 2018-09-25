 // Zahin Roja
#include "CheckingAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double bal,  double fees):Account(bal)
{
    fee = fees;
}
void CheckingAccount::deposit(double amt)
{
    balance = balance - amt;
}
void CheckingAccount::withdraw(double amt)
{
    if(amt < balance)
    {
        balance = balance - fee;
    }
}
CheckingAccount CheckingAccount::operator+(double amt)
{
    amt = amt + balance- fee;
}
void CheckingAccount::display()
{
    cout << "Checking Account: " << accountsCreated++ << " balance = $" << balance<< ",transaction fee= $ " << fee << endl;
}

