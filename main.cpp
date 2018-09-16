#include "Circle.h"
#include "Cylinder.h"
#include "Cone.h"
#include <iostream>

using namespace std;

int main() {

 Cylinder cy1;
 cy1.printInfo();
 cout << endl;
 Cylinder cy2(5.0, 2.0);
 cy2.printInfo();
 cout << endl;
 Cone cn1;
 cn1.printInfo();
 cout << endl;
 Cone cn2(5.0, 2.0);
 cn2.printInfo();

 }

// Output
/*
Cylinder Radius is 1.0 Height is 1.0 Color is red Surface area is 9.8696 Volume is 9.8696
Cylinder Radius is 5.0 Height is 2.0 Color is red Surface area is 246.74 Volume is 493.48
Cone Radius is 1.0 Height is 1.0 Color is red Surface area is 9.8696 Volume is 9.8696
Cone Radius is 5.0 Height is 2.0 Color is red Surface area is 246.74 Volume is 493.48
*/
