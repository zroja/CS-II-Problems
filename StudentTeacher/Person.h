// Zahin Roja
#ifndef _PERSON_H
#define _PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person{

    public:
    Person(string nombre, string addresss);
    string getName();
    string getAddress();
    void setAddress(string addresss);
    virtual void printInfo(){};

    protected:
    string name;
    string address;

};
#endif

