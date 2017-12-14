#include "rectangle.h"

//setter
void Rectangle::setWidth(double w) {this->w = w;}
void Rectangle::setHeight(double h) {this->h = h;}
//getter
double Rectangle::getWidth() const {return w;}
double Rectangle::getHeight() const {return h;}
double Rectangle::getArea() const {return w * h;}
double Rectangle::getCircumference() const {return 2*w + 2*h;}