// Zahin Roja
#ifndef _SHIP_H
#define _SHIP_H
#include <string>
#include <iostream>
using namespace std;

class Ship{

    public:
    Ship(string, string);
    void setName(string);
    void setYear(string);
    string getName();
    string getYear();
    virtual void print();

    protected:
    string name;
    string year;
};
#endif
