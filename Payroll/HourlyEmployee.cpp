// Zahin Roja
#include "HourlyEmployee.h"
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee(string first, string last, string SSN, double wagely, double hourly):Employee(first, last, SSN)
{
    wage = wagely;
    hours = hourly;
}
double HourlyEmployee::earnings()
{
    double earnings;
    if (hours <= 40)
    {
        earnings = wage * hours;
    }
    else if (hours > 40)
    {
        earnings = (40 * wage) + ((hours-40)* wage * 1.5);
    }
    return earnings;
}
void HourlyEmployee::print()
{
    cout << "Hourly Employee " << first << " " << last << endl;
    cout << "Social Security Number " << SSN << endl;
    cout << "Hourly Wage " << wage << endl;
    cout << "Hours Worked " << hours << endl;
}

