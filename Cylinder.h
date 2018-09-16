// Zahin Roja
#ifndef _CYLINDER_H
#define _CYLINDER_H
#include "Circle.h"
#include <string>
#include <iostream>
using namespace std;

class Cylinder: public Circle{

    public:
    Cylinder();
    Cylinder(double);
    Cylinder(double, double);
    Cylinder(double, double, string);
    double getHeight();
    void setHeight(double);
    double getVolume();
    double getArea();
    virtual void printInfo();

    protected:
    double radius = 1;
    string color = "red";
    double height = 1.0;
    const double PI = 3.141592;

};
#endif

