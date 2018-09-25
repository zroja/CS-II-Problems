// Zahin Roja
#include "BasePlusCommissionEmployee.h"
#include <iostream>
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string first, string last, string SSN, double commission, double gross, double base):CommissionEmployee(first, last, SSN, commission, gross)
{
   baseSalary = base;
}
double BasePlusCommissionEmployee::earnings()
{
    return baseSalary + (commissionRate * grossSales);

}
void BasePlusCommissionEmployee::print()
{
    cout << "Salaried Employee " << first << " " << last << endl;
    cout << "Social Security Number " << SSN << endl;
    cout << "Gross Sales " << grossSales << endl;
    cout << "Commission Rate " << commissionRate << endl;
    cout << "Base Salary " << baseSalary << endl;
}
