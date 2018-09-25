// Zahin Roja
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H
#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

class CheckingAccount: public Account
{
    public:
    CheckingAccount(double, double);
    void deposit(double);
    void withdraw(double);
    CheckingAccount operator+(double);
    void display();

    private:
    double fee;
};
#endif // _CHECKINGACCOUNT_H


