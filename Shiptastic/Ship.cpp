// Zahin Roja
#include "Ship.h"
#include <iostream>
using namespace std;

Ship::Ship(string nombre, string y)
{
    name = nombre;
    year = y;
}
void Ship::setName(string nombre)
{
    name = nombre;
}
string Ship::getName()
{
   return name;
}
void Ship::setYear(string y)
{
    year =y;
}
string Ship::getYear()
{
    return year;
}
void Ship::print()
{
    cout << "Ship Name " << getName() << endl;
    cout << "Year " << getYear() << endl;
}

