#ifndef CIRCLE_H
#define CIRCLE_H

#include "sphere.h"

class Circle : public Sphere{
public:
	//constructor
	Circle() : Sphere(0) {}
	Circle(double r) : Sphere(r) {}	
	//functions
	//getter
	double getArea();
	double getCircumference();
};
#endif//CIRCLE_H