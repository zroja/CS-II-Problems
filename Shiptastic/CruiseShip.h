// Zahin Roja
#ifndef _CRUISESHIP_H
#define _CRUISESHIP_H
#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

class CruiseShip: public Ship{

    public:
    CruiseShip(string, string, int);
    void setPass(int);
    int getPass();
    void print();

    protected:
    string name;
    string year;
    int passenger;
};

#endif

