#include <iostream>
#include <cmath>

int sum(const int iteration);						//part a - sum of {1,2,...,iteration}
void convert_decimal(int dez, const int base);		//part b - conversion of dezimal- in "base"-system
double power(double number, const int exp);			//part c - exponentiatian 
double square(double number,const int exp);			//part c - number to the 2nd power


//##################################################
int main()
{	
	//subtask a
	int result = sum(12);
	std::cout << "______________________________________________________"
	<<std::endl<<"Aufgabenteil a:"<<std::endl
	<<"------------------------------------------------------"<<std::endl
	<<"Summe von {1,2,...,12} = "
	<<result<<std::endl<<std::endl;

	//subtask b
	std::cout<< "______________________________________________________"
	<<std::endl<<"Aufgabenteil b:"<<std::endl
	<<"------------------------------------------------------"<<std::endl
	<<"1278 im Binärsystem = ";
	convert_decimal(1278,2);
	std::cout<<"1278 im Oktalsystem = ";
	convert_decimal(1278,8);
	std::cout << std::endl;

	//subtask c
	std::cout<< "______________________________________________________"
	<<std::endl<<"Aufgabenteil c:"<<std::endl
	<<"------------------------------------------------------"<<std::endl
	<<"12^2 = ";
	double pow = power(12,3);
	std::cout << pow << std::endl<<std::endl;



	return 0;
}
//##################################################

int sum(const int iteration){						//part a
	if(iteration <= 1){								//(iteration <= 1) = "first" addition
		return 1;
	}
	else {
		int result = sum(iteration-1);				
		result+=iteration;							//iteration = addition element {1,2,...,N}
		return result;
	}
}
void convert_decimal(int dez, const int base){		//part b
	double result = 0;								//only possible for base 1 to 10
	int loops = 0;									//without letters as numbers
	while (dez !=0){								//repeat while dez < 0 
		int temp = dez % base;						
		dez = (dez - temp) / base;
		result += temp * pow(10,loops);
		loops++;
	}
	std::cout.precision(14);
	std::cout << "("<<result<<") "<<base<< std::endl;
	return;
}
double power(double number, const int exp){			//part c - exponentiatian 
	if(exp ==1) return number; 
	else if(exp%2==0){
		number = square(number, exp);
		return number;
	}
	else {
		number = power(number, exp-1) * number;
		return number;
	}
}
double square(double number,const int exp){			//part c - number to the 2nd power
	number = power(number, exp/2);
	number = number * number;
	return number;
}
