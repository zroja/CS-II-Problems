// Zahin Roja
#ifndef _SALARIEDEMPLOYEE_H
#define _SALARIEDEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class SalariedEmployee: public Employee{

    public:
    SalariedEmployee(string, string, string, double);
    double earnings();
    void print();

    protected:
    double weeklySalary;
};

#endif /


