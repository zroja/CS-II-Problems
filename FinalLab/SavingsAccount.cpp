 // Zahin Roja
#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;

SavingsAccount:: SavingsAccount(double bal, double pct): Account(bal)
{
    rate = pct;
}
double SavingsAccount::calculateInterest()
{
    rate = balance* rate;
    return rate;
}
void SavingsAccount::display()
{
    cout << "Savings Account: " << accountsCreated++ << " balance = $" << balance<< ",interest rate = %" << rate << endl;
}
