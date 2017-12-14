#include "cuboid.h"

//getter
double Cuboid::getWidth() const {return width;}
double Cuboid::getHeight() const {return height;}
double Cuboid::getLength() const {return length;}
double Cuboid::getSurfaceArea() const {return 2*(width*height + width*length + height*length);}
double Cuboid::getVolume() const {return width * height * length;}
//setter	
void Cuboid::setWidth(double width) {this->width = width;}
void Cuboid::setHeight(double height) {this->height = height;}
void Cuboid::setLength(double length) {this->length = length;}
