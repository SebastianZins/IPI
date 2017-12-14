#ifndef CUBOID_H
#define CUBOID_H

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
#endif//CUBOID_H