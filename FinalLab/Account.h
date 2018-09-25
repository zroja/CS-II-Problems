// Zahin Roja
#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

class Account{
    public:
        Account();
        Account(double);
        void deposit(double);
        void withdraw(double);
        double getBalance();
        Account operator+(double);
        virtual void display();

    protected:
        static int accountsCreated;
        double balance;
        int accountNumber;
};
#endif // _ACCOUNT_H
