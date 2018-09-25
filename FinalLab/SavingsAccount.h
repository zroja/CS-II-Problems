// Zahin Roja
#ifndef _SAVINGSACCOUNT_H
#define _SAVINGSACCOUNT_H
#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

class SavingsAccount: public Account{
    public:
        SavingsAccount(double, double);
        double calculateInterest();
        void display();

    private:
        double rate;
};
#endif // _SAVINGACCOUNT_H
