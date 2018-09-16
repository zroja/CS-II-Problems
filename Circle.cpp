// Zahin Roja
#include "Circle.h"
#include <iostream>
#include <iomanip>
using namespace std;

Circle::Circle()
{
    radius = 1.0;
    color = "red";
}
Circle::Circle(double rad)
{
    rad = radius;
}
Circle::Circle(double rad, string col)
{
    rad = radius;
    col = color;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double rad)
{
    radius = rad;
}
string Circle::getColor()
{
    return color;
}
void Circle::setColor(string col)
{
    color = col;
}
double Circle::getArea()
{
    return (radius * radius * PI);
}
void Circle::printInfo()
{
    cout << setprecision(2)<< fixed ;
    cout << "Radius is " << radius << " " ;
    cout << "Color is  " << color << " " ;
}

