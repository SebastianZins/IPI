#include "circle.h"
#include "sphere.h"

double const pi = 3.14159;

//getter
double Circle::getArea() {return pi * r * r;}
double Circle::getCircumference() {return 2*pi*r;}