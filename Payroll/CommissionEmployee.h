// Zahin Roja
#ifndef _COMMISIONEMPLOYEE_H
#define _COMMISIONEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class CommissionEmployee: public Employee{

    public:
    CommissionEmployee(string, string, string, double, double);
    double earnings();
    void print();

    protected:
    double grossSales;
    double commissionRate;
};

#endif // _SALARIEDEMPLOYEE_H
