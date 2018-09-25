// Zahin Roja
#ifndef _HOURLYEMPLOYEE_H
#define _HOURLYEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class HourlyEmployee: public Employee{

    public:
    HourlyEmployee(string, string, string, double, double);
    double earnings();
    void print();

    protected:
    double wage;
    double hours;
};

#endif //

