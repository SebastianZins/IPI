#include "sphere.h"

double const pi = 3.14159;

//setter
void Sphere::setRadius(double r) {this->r = r;}
//getter
double Sphere::getRadius() const {return r;}
double Sphere::getVolume() const {return (4/3) * pi * r*r*r;}
double Sphere::getSurfaceArea() const {return 4 * pi * r * r;}

