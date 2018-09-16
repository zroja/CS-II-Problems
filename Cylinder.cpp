// Zahin Roja
#include "Cylinder.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Cylinder::Cylinder(): Circle()
{

}
Cylinder::Cylinder(double heights)
{
    height = heights;
}
Cylinder::Cylinder(double heights, double rad):Circle(rad)
{
    height = heights;
    radius = rad;
}
Cylinder::Cylinder(double heights, double rad, string col):Circle(rad, color)
{
    height = heights;
    radius = rad;
    color = col;
}
double Cylinder::getHeight()
{
    return height;
}
void Cylinder::setHeight(double heights)
{
    heights = height;
}
double Cylinder::getVolume()
{
    return (PI*radius*radius*height);
}
double Cylinder::getArea()
{
    return (2*PI*radius*height+(2*PI*radius*radius));
}
void Cylinder::printInfo()
{
    cout << setprecision(1)<< fixed ;
    cout << "Cylinder " ;
    cout << "Height is " << height << " ";
    cout << "Radius is " << radius << " ";
    cout << setprecision(2)<< fixed ;
    cout << "Color is " << color << " " ;
    cout << "Surface Area " << getArea() << " ";
    cout << "Volume " << getVolume()<< " " ;
}
