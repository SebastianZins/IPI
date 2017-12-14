#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle{
protected:
	double side;
public:
	//constructor
	Square();
	Square(double side);
};
#endif//SQUARE_H