#ifndef ERRORVALUE_H
#define ERRORVALUE_H

class ErrorValue{
	double a;//average value
	double b;//average deviation
public:
	//con-/ destructor
	ErrorValue();
	ErrorValue(double newA, double newB);
	~ErrorValue();

	//functions
	double value();
	double absolute();
	double relative();

	ErrorValue fromMeasurements(double* values, int iterations);

	//operators
	ErrorValue operator+ (const ErrorValue& err);
	
};


#endif//ERRORVALUE_H