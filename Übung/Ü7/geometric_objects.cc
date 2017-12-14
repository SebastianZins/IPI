#include <iostream>

const double pi = 3.14159;

//################class Rectangle###############
class Rectangel{
private:
	double w,h;
public:
	//constuctor
	Rectangel() : w(0), h(0) {}
	Rectangel(double w, double h) : w(w), h(h) {}
	//functions
	//setter
	void setWidth(double w);
	void setHeight(double h);
	//getter
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getCircumference() const;
};
//################class Square###############
class Square : public Rectangel{
protected:
	double side;
public:
	//constructor
	Square() : Rectangel(0,0) {}
	Square(double side) : Rectangel(side, side) {}
};
//################class Sphere###############
class Sphere{
protected:
	double r;
public:
	//constructor
	Sphere() : r(0) {}
	Sphere(double r) : r(r) {}
	//functions
	//setter
	void setRadius(double r);
	//getter
	double getRadius() const;
	double getVolume() const;
	double getSurfaceArea() const;
};
//################class Circle###############
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
//################class Cuboid###############
class Cuboid{
	double width, height, length;
public:
	//constructor
	Cuboid() : width(0), height(0), length(0) {}
	Cuboid(double width, double height, double length)
		: width(width), height(height), length(length) {}
	//funcitons
	//getter
	double getWidth() const;
	double getHeight() const;
	double getLength() const;
	double getSurfaceArea() const;
	double getVolume() const;
	//setter	
	void setWidth(double width);
	void setHeight(double height);
	void setLength(double length);
};
//################class Cube###############
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

//############################################
//############################################
int main(){

	Cube sq = Cube(2);
	std::cout <<sq.getHeight()<<" "<<sq.getVolume()<<std::endl;
	return 0;
}
//############################################
//############################################


//################functions Rectangle###############
//setter
void Rectangel::setWidth(double w) {this->w = w;}
void Rectangel::setHeight(double h) {this->h = h;}
//getter
double Rectangel::getWidth() const {return w;}
double Rectangel::getHeight() const {return h;}
double Rectangel::getArea() const {
	return w * h;}
double Rectangel::getCircumference() const {
	return 2*w + 2*h;}

//################funtions Sphere###############
//setter
void Sphere::setRadius(double r) {this->r = r;}
//getter
double Sphere::getRadius() const {
	std::cout<<r<<std::endl;
	return r;}
double Sphere::getVolume() const {return (4/3) * pi * r*r*r;}
double Sphere::getSurfaceArea() const {return 4 * pi * r * r;}

//################functions Circle###############
//getter
double Circle::getArea() {return pi * r * r;}
double Circle::getCircumference() {return 2*pi*r;}

//################functions Cuboid###############
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

//################functions Cube###############
//getter
double Cube::getSide() const {return side;}
double Cube::getVolume() const {return getArea() * 6;}
double Cube::getSurfaceArea() const {return getArea() * 6;}
//setter
void Cube::setSide(double side) {this->side = side;}
