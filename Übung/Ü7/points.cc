#include <iostream>
#include <cmath>
using namespace std;

class Point2D {
protected:
  double x, y;
  
public:
  //constructor
  Point2D();
  Point2D(double xNew, double yNew);
  //setter
  void setX(double xNew);
  void setY(double yNew);
  //getter
  double getX() const;
  double getY() const;
  //distance between 2 2D-Points
  double calcDistance(const Point2D& newPoint) const;
};

class Point3D : public Point2D {
private:
  double z;

public:
  //constructor
  Point3D();
  Point3D(double xNew, double yNew, double zNew);
  //functions
  //getter
  void setZ(double zNew);
  //setter
  double getZ() const;
  //distance between 2 3D-Points
  double calcDistance(const Point3D& newPoint) const;
};


int main() {
  //part 1a
	Point2D P1 = Point2D(0,0);
  Point2D P2 = Point2D(2,2);

  double distance = P1.calcDistance(P2);
  std::cout<<std::endl<< "Abstand der Punkte"<< std::endl
  << "P1("<<P1.getX()<<"|"<<P1.getY()
  <<") und P2("<<P2.getX()<<"|"<<P2.getY()<<") = "
  << distance << std::endl;

  //part 1b
  Point3D P3 = Point3D();
  Point3D P4 = Point3D(3,-3,0);

  P3.setX(2);
  P3.setY(5);
  P3.setZ(4);

  distance = P3.calcDistance(P4);
  std::cout <<std::endl<< "Abstand der Punkte"<< std::endl
  << "P3("<<P3.getX()<<"|"<<P3.getY()<<"|"<<P3.getZ()
  <<") und P4("<<P4.getX()<<"|"<<P4.getY()<<"|"<<P4.getZ()
  <<") = "<< distance << std::endl<<std::endl;  

	return 0;
}

//class Point2D
//constructor
Point2D::Point2D(){
  x = 0;
  y = 0;
}
Point2D::Point2D(double xNew, double yNew){
  x = xNew;
  y = yNew;
}
//functions
//setter
void Point2D::setX(double xNew){
  x = xNew;
}
void Point2D::setY(double yNew){
  y = yNew;
}
//getter
double Point2D::getX() const{
  return x;
}
double Point2D::getY() const{
  return y;
}
//distance between 2 2D-Points
double Point2D::calcDistance(const Point2D& newPoint) const{
  return sqrt( pow((getX() - newPoint.getX()),2) 
    * pow((getY() - newPoint.getY()),2) );
}

//class Point3D
//constructor
Point3D::Point3D(){
  x = 0;
  y = 0;
  z = 0;
}
Point3D::Point3D(double xNew, double yNew, double zNew){
  x = xNew;
  y = yNew;
  z = zNew;
}
//functions
//getter
void Point3D::setZ(double zNew) {z = zNew;}
//setter
double Point3D::getZ() const {return z;}
//distance between 2 3D-Points
double Point3D::calcDistance(const Point3D& newPoint) const{
  return sqrt( pow((getX() - newPoint.getX()),2) 
    * pow((getZ() - newPoint.getZ()),2) 
    * pow((getZ() - newPoint.getZ()),2) );
}
