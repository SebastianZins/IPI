#include "square.h"
#include "rectangle.h"

Square::Square() : Rectangle(0,0) {}
Square::Square(double side) : Rectangle(side, side) {}