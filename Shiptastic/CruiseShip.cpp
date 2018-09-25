// Zahin Roja
#include "CruiseShip.h"
#include "Ship.h"
#include <iostream>
using namespace std;

CruiseShip::CruiseShip(string nombre, string y, int pass):Ship(nombre, y)
{
    name = nombre;
    year = y;
    passenger = pass;
}
void CruiseShip::setPass(int pass)
{
    passenger = pass;
}
int CruiseShip::getPass()
{
    return passenger;
}
void CruiseShip::print()
{
    Ship::print();
    cout << "Maximum Passengers " << getPass() << endl;
    cout << endl;
}
