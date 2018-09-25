// Zahin Roja
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string firstname, string lastname, string socialSecurityNumber)
{
    first = firstname;
    last = lastname;
    SSN = socialSecurityNumber;
}
void Employee::setFirst(string firstname)
{
    first = firstname;
}
string Employee::getFirst()
{
    return first;
}
void Employee::setLast(string lastname)
{
     last = lastname;
}
string Employee::getLast()
{
     return last;
}
void Employee::setSSN(string socialSecurityNumber)
{
     SSN = socialSecurityNumber;
}
string Employee::getSSN()
{
    return SSN;
}
void Employee::print()
{
    cout << "First Name" << getFirst() <<endl;
    cout << "Last Name" << getLast() <<endl;
    cout << "Social Security Number"<< getSSN() << endl;
}
