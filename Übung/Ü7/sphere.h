#ifndef SPHERE_H
#define SPHERE_H

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
#endif//SPHERE_H