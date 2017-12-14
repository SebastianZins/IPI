#include <iostream>
#include <cmath>

//Structures
struct Fraction{
	int numerator;
	int denominator;
}f1, f2, f3, f4, fResult, temp;								//Declaration of fractions
//Functions
void reduce(Fraction& fraction);							//part a –– round
Fraction sum(Fraction& frac1, Fraction& frac2);				//part b –– add
Fraction mult(Fraction& frac1, Fraction& frac2);			//part c –– multiply
Fraction reciprocal(Fraction& fraction);					//part d –– reciprocal value
double decimal(Fraction& fraction);							//part e –– dezimal value

//####################################################
int main(){
	//value of fractions
	f1.numerator = 12;  f1.denominator = 53;				//value of 12/53
	f2.numerator = 3;   f2.denominator = 4;					//value of 3/4
	f3.numerator = -1;  f3.denominator = 2;					//value of -1/2
	f4.numerator = 1;   f4.denominator = 5;					//value of 1/5
	//calculation
	fResult = mult(f2, f3);									//(3/4)*-(1/2) = fResult
	fResult = sum(f1, fResult);								//(12/53) + fResult = fResult'
	temp = reciprocal(f4);
	fResult = mult(fResult, temp);							//fResult' / (1/5) = fResult' * (5/1) = fResult''
	double resultDez = decimal(fResult);					//fResult'' in dezimal
	//Output of fResult and resultDez
	std::cout<<"Das Ergebnis ist "							
	<<fResult.numerator<<"/"<<fResult.denominator
	<<" oder "<<resultDez<<std::endl;
	return 0;
}
//####################################################
void reduce(Fraction& fraction){							//part a –– round
	int a = fraction.numerator, b = fraction.denominator;
	while(b != 0){											//greatesst common divisor
		int h = a % b;										//with Euclidean algorithm
		a = b;
		b = h;
	}
	fraction.numerator /= a;								//numerator ..
	fraction.denominator /= a;								//and denominator maximum reduction
	return;
}
Fraction sum(Fraction& frac1, Fraction& frac2){				//part b –– add
	Fraction sum;
	if(frac1.denominator == frac2.denominator){
		sum.numerator = frac1.numerator + frac2.numerator;
		sum.denominator = frac1.denominator;
	}else{
		sum.numerator = (frac1.numerator * frac2.denominator) 
						   + (frac2.numerator * frac1.denominator);
		sum.denominator = frac1.denominator * frac2.denominator;
		reduce(sum);
	}
	return sum;
}
Fraction mult(Fraction& frac1, Fraction& frac2){			//part c –– multipy
	Fraction prod;
	prod.numerator = frac1.numerator * frac2.numerator;
	prod.denominator = frac1.denominator * frac2.numerator;
	reduce(prod);
	return prod;
}
Fraction reciprocal(Fraction& fraction){					//part d –– reciprocal value
	int temp = fraction.denominator;
	fraction.denominator = fraction.numerator;
	fraction.numerator = temp;
	return fraction;
}
double decimal(Fraction& fraction){							//part e –– dezimal value 
	double value = 
	(double) fraction.numerator / (double) fraction.denominator;
	return value;
}
