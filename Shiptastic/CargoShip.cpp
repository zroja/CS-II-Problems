// Zahin Roja
#include "CargoShip.h"
#include "Ship.h"
#include <iostream>
using namespace std;

CargoShip::CargoShip(string nombre, string y, int cap):Ship(nombre, y)
{
    name = nombre;
    year = y;
    capacity = cap;
}
void CargoShip::setCapacity(int cap)
{
    cap = capacity;
}
int CargoShip::getCapacity()
{
    return capacity;
}
void CargoShip::print()
{
    Ship::print();
    cout << "Capacity " << getCapacity() << endl;
}

