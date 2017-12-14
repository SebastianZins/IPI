#include <iostream>
#include <cmath>

int number_of_solutions(const double a, const double b, const double c);
inline double calc_one_solution(const double a, const double b, const double c);
inline double calc_two_solution_plus(const double a, const double b, const double c);
inline double calc_two_solution_minus(const double a, const double b, const double c);

int main(int argc, char const *argv[])
{	double a=0, b=0, c=0;
	
	std::cout<<"Geben Sie Werte für a, b und c einer quadratischen Gleichung ein... ";
	std::cin>>a>>b>>c;

	if(number_of_solutions(a, b, c) == 0 || a == 0) std::cout << "Keine Lösung möglich"<<std::endl;
	else if(number_of_solutions(a, b, c) == 1) std::cout << "Die Lösung ist x = "<<calc_one_solution(a,b,c)<<std::endl;
	else if(number_of_solutions(a, b, c) == 2) std::cout << "Die Lösungen sind x1 = "<<calc_two_solution_plus(a,b,c)<<", x2 = "<< calc_two_solution_minus(a, b, c)<<std::endl;
	return 0;
}

int number_of_solutions(const double a, const double b, const double c){
	int temp = pow(b, 2) - 4*a*c;
	if(temp < 0) return 0;
	else if(temp == 0) return 1;
	else if(temp > 0) return 2;
	else return 3;
}
inline double calc_one_solution(const double a, const double b, const double c){
	return -b/ (2*a);
}
inline double calc_two_solution_plus(const double a, const double b, const double c){
	return (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
}
inline double calc_two_solution_minus(const double a, const double b, const double c){
	return (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
}