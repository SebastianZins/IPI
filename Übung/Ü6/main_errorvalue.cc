#include <iostream>
#include <cmath>

#include "errorvalue.h"

int main(){

	//consruktor takes two double variables: the value and the
	//absolute deviation
	ErrorValue A,B,C,D;

	//initialization of A of type ErrorValue
	double measurementsA[8] = {10.0, 10.2, 10.8, 10.1, 9.6, 10.2, 9.9, 10.3};
	int sizeA = 8;
	A = A.fromMeasurements(measurementsA, sizeA);
	//initialization of B of type ErrorValue
	double measurementsB[10] = {14.2, 15.0, 13.8, 14.5, 14.8, 14.5, 13.9, 14.1, 14.5, 14.2};
	int sizeB = 10;
	B =  B.fromMeasurements(measurementsB, sizeB);
	//initialization of C of type ErrorValue
	double measurementsC[9] = {11.3, 10.8, 11.1, 11.0, 11.6, 10.8, 10.7, 11.8, 12.0};
	int sizeC = 9;
	C = C.fromMeasurements(measurementsC, sizeC);

	//D equals deviation of A,B and C
	D = A + B + C;

	//output
	std::cout<< std::endl << D.value() << " +- " << D.absolute() <<
		" (" << D.relative() * 100 << " %)" << std::endl << std::endl;
	return 0;
}