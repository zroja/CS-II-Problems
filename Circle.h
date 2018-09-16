// Zahin Roja
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include <string>
#include <iostream>
using namespace std;

class Circle{

    public:
    Circle();
    Circle(double);
    Circle(double, string);
    double getRadius();
    void setRadius(double);
    string getColor();
    void setColor(string);
    double getArea();
    virtual void printInfo();

    private:
    double radius = 1.0;
    string color = "red";
    const double PI = 3.141592;

};
#endif

