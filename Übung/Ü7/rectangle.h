#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
	double w,h;
public:
	//constuctor
	Rectangle() : w(0), h(0) {}
	Rectangle(double w, double h) : w(w), h(h) {}
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
#endif //RECTANGLE_H