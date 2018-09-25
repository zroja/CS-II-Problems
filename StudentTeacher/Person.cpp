// Zahin Roja
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string nombre, string addresss)
{
    name = nombre;
    address = addresss;
}
string Person::getName()
{
    return name;
}
string Person::getAddress()
{
    return address;
}
void Person::setAddress(string addresss)
{
    address = addresss;
}
