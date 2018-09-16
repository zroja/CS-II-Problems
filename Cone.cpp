// Zahin Roja
#include "Cylinder.h"
#include "Cone.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

Cone::Cone(): Cylinder()
{

}
Cone::Cone(double heights, double rad): Cylinder(height, radius)
{
    height = heights;
    radius = rad;
}
double Cone::getArea()
{
    return (PI* radius*(radius+ sqrt(height*height+ radius * radius)));
}
double Cone::getVolume()
{
    return ((PI*radius * radius * height)/3);
}
void Cone::printInfo()
{
    cout << setprecision(1)<< fixed ;
    cout << "Cone " ;
    cout << "Height is " << height << " ";
    cout << "Radius is " << radius << " ";
    cout << setprecision(2)<< fixed ;
    cout << "Color is " << color << " " ;
    cout << "Surface Area " << getArea() << " ";
    cout << "Volume " << getVolume()<< " " ;
}
