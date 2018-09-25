#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee{

    public:
    Employee(string, string, string);
    void setFirst(string);
    string getFirst();
    void setLast(string);
    string getLast();
    void setSSN(string);
    string getSSN();
    virtual double earnings()= 0;
    virtual void print();

    protected:
    string first;
    string last;
    string SSN;

};
#endif
