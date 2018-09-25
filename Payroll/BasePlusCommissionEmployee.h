// Zahin Roja
#ifndef _COMMISSIONEMPLOYEE_H
#define _COMMISSIONEMPLOYEE_H
#include <string>
#include <iostream>
#include "CommissionEmployee.h"
#include "Employee.h"

using namespace std;

class BasePlusCommissionEmployee: public CommissionEmployee{

    public:
    BasePlusCommissionEmployee(string, string, string, double, double, double);
    double earnings();
    void print();

    protected:
    double baseSalary;
};

#endif
