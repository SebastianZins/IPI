#ifndef CUBE_H
#define CUBE_H

#include "square.h"

class Cube : public Square{
public:
	//constructor
	Cube() : Square(0) {}
	Cube(double side) : Square(side) {}
	//functions
	//getter
	double getSide() const;
	double getVolume() const;
	double getSurfaceArea() const;
	//setter
	void setSide(double side);
};
#endif//CUBE_H