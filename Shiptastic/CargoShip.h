// Zahin Roja
#ifndef _CARGOSHIP_H
#define _CARGOSHIP_H
#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

class CargoShip: public Ship{

    public:
    CargoShip(string, string, int);
    void setCapacity(int);
    int getCapacity();
    void print();

    protected:
    string name;
    string year;
    int capacity;

};
#endif // _CARGOSHIP_H
