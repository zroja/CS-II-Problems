// Zahin Roja
#include "CommissionEmployee.h"
#include <iostream>
using namespace std;

CommissionEmployee::CommissionEmployee(string first, string last, string SSN, double commission, double gross):Employee(first, last, SSN)
{
    commissionRate = commission;
    grossSales = gross;
}
double CommissionEmployee::earnings()
{
    double earnings;
    earnings = commissionRate*grossSales;

    return earnings;
}
void CommissionEmployee::print()
{
    cout << "Commission Employee " << first << " " << last << endl;
    cout << "Social Security Number " << SSN << endl;
    cout << "Gross Sales " << grossSales << endl;
    cout << "Commission Rate " << commissionRate << endl;
}

