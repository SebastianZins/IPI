#include <iostream>
#include <cmath>

#include "myvector.h"

namespace Pi{float PI = 3.14159265359;}

// Konstruktoren und Dekonstruktor
MyVector::MyVector(){//default constructor
  x = 0;
  y = 0;
  z = 0;
}
MyVector::MyVector(float newX, float newY, float newZ){//constructor with fixed values
  x = newX;
  y = newY;
  z = newZ;
}
MyVector::~MyVector(){}
// Methoden der Klasse
void MyVector::print(){//cout vector
  std::cout<<"("<<x<<","<<y<<","<<z<<")";
}

void MyVector::setValues(float newX, float newY, float newZ){//set values of x, y and z
  x = newX;
  y = newY;
  z = newZ;
}
void MyVector::setX(float newX) {x = newX;}//set value of x
void MyVector::setY(float newY) {y = newY;}//set value of y
void MyVector::setZ(float newZ) {z = newZ;}//set value of z

float MyVector::getX() {return x;}//return x
float MyVector::getY() {return y;}//return y
float MyVector::getZ() {return z;}//return z;

float MyVector::length() const{//returns length of vector
  return sqrt(x*x + y*y + z*z);}

MyVector MyVector::add(const MyVector& vec){//adds vector to vec
  MyVector temp;
  temp.x = x + vec.x;
  temp.y = y + vec.y;
  temp.z = z + vec.z;
  return temp;
}
MyVector MyVector::subtract(const MyVector& vec){//subtracts vec from vector
  MyVector temp;
  temp.x = x - vec.x;
  temp.y = y - vec.y;
  temp.z = z - vec.z;
  return temp;
}
MyVector MyVector::mult(float scale){//multipliey vector with scale
  MyVector temp;
  temp.x = x * scale;
  temp.y = y * scale;
  temp.z = z * scale;
  return temp; 
}
float MyVector::dot(const MyVector& vec){//scalar of vector and vec
  return (x * vec.x) + (y * vec.y) + (z * vec.z);
}
MyVector MyVector::cross(const MyVector& vec){//cross product between a and b
  MyVector temp;
  temp.x = (y * vec.z) - (z * vec.y);
  temp.y = (z * vec.x) - (x * vec.z);
  temp.z = (x * vec.y) - (y * vec.x);
  return temp; 
}

float MyVector::angle(const MyVector& vec){//angle between vector and vec
  using namespace Pi;
  float temp = dot(vec) / (length() * vec.length());
  temp = acos(temp); //inverse of cos of (a*b)/(|a|*|b|) as radian
  temp *= (180/PI); //transforms in degree
  return temp;
}
float MyVector::area(const MyVector& vec){//area of vector and vec
  MyVector temp;
  temp = cross(vec);
  temp.print();
  float len = temp.length();
  std::cout<<len<<std::endl;
  return len/2;
}
bool MyVector::isOrthogonal(const MyVector& vec){//true if vector orthogonal to vec 
  if(dot(vec) == 0) return true;
  else return false;
}
bool MyVector::isParallel(const MyVector& vec){//true if vector parallel to vec
  if(dot(vec)==0) return true;
  else return false;
}