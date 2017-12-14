#include "cube.h"
#include "square.h"

//getter
double Cube::getSide() const {return side;}
double Cube::getVolume() const {return getArea() * 6;}
double Cube::getSurfaceArea() const {return getArea() * 6;}
//setter
void Cube::setSide(double side) {this->side = side;}
