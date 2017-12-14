#ifndef MYVECTOR_H
#define MYVECTOR_H 

class MyVector{
  float x,y,z;
  
public:
  // Konstruktoren und Dekonstruktor
  MyVector();//default constructor
  MyVector(float newX, float newY, float newZ);//constractor with fixed values
  ~MyVector();
  // Methoden der Klasse
  void print();//cout vector
  
  void setValues(float newX, float newY, float newZ);//set Values
  void setX(float newX);//set x-value
  void setY(float newY);//set y-value
  void setZ(float newZ);//set z-value
  
  float getX();//return x
  float getY();//return y
  float getZ();//return z
  
  float length() const;//length of vector

  MyVector add(const MyVector& vec);//a.add(b) = add a to b
  MyVector subtract(const MyVector& vec);//a.subtract(b) = subtract b from a
  
  MyVector mult(float scale);//a.mult(scale) = multiply a with scale
  float dot(const MyVector& vec);//a.dot(b) = scalar of a with b
  MyVector cross(const MyVector& vec);//a.cross(b) = crossproduct of a and b

  float angle(const MyVector& vec) ;//a.angle(b) = angle between a and b
  float area(const MyVector& vec);//a.area(b) = area of a and b
  
  bool isOrthogonal(const MyVector& vec);//true if a orthogonal to b
  bool isParallel(const MyVector& vec);//true if a parallel to b

};
#endif //MYVECTOR_H