 // Zahin Roja
#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;

SavingsAccount:: SavingsAccount(double bal, double pct): Account(bal)
{
    rate = pct;
}
double SavingsAccount::CalculateInterest()
{
    rate = balance* rate;
    return rate;
}
