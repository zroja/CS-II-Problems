// Zahin Roja
#ifndef _CONE_H
#define _CONE_H
#include "Cylinder.h"
#include <string>
#include <iostream>
using namespace std;

class Cone: public Cylinder{

    public:
    Cone();
    Cone(double, double);
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
