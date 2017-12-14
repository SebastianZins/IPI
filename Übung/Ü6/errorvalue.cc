#include <cmath>
#include <iostream>

#include "errorvalue.h"

//constructors
ErrorValue::ErrorValue(){
	a = 0;
	b = 0;
}
ErrorValue::ErrorValue(double newA, double newB){
	a = newA;
	b = newB;
}
//destructor
ErrorValue::~ErrorValue(){}

//functions
double ErrorValue::value(){//get value/a
	return a;
}
double ErrorValue::absolute(){//get absolute/b
	return b;
}
double ErrorValue::relative(){//get relative/ (b/a)
	double temp = b / a;
	return temp;
}
//creates ErrorValue from values of given array
ErrorValue ErrorValue::fromMeasurements(double* values, int iterations){
	ErrorValue temp;
	//average value
	for(int i=0;i<iterations;i++) {temp.a += values[i];}
	temp.a /= iterations;
	//average deviations
	for(int i=0;i<iterations;i++) {temp.b += pow((values[i] - temp.a),2);}
	temp.b /= (iterations -1);
	return temp;
}

//operator
ErrorValue ErrorValue::operator+ (const ErrorValue& err){
	ErrorValue temp;
	temp.a = a + err.a;
	temp.b = sqrt(b*b + err.b*err.b);
	return temp;
}