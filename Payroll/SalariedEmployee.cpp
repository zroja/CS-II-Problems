// Zahin Roja
#include "SalariedEmployee.h"
#include <iostream>
using namespace std;

SalariedEmployee::SalariedEmployee(string first, string last, string SSN, double earnings):Employee(first, last, SSN)
{
    weeklySalary = earnings;
}
double SalariedEmployee::earnings()
{
    return weeklySalary;
}
void SalariedEmployee::print()
{
    cout << "Salaried Employee " << first << " " << last << endl;
    cout << "Social Security Number " << SSN << endl;
    cout << "Weekly Salary " << weeklySalary << endl;
}

