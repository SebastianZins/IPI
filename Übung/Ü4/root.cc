#include <iostream>
#include <cmath>

float const root2 = 1.414213562373;
float const root3 = 1.732050807568;
float const root4 = 2.0;

float newton_method(int const c);
float bisection_method(int const c);
float test(int const c, float const value);

int main(int argc, char const *argv[])
{
	int c;
	std::cout << "Quadratwurzelrechner"<<"\nGeben Sie eine Zahl ein...";
	std::cin >> c;
	//float a = newton_method(c);									//b
	float a = bisection_method(c);								//c
	std::cout.precision(12);
	std::cout<<"Ergebnis: "<<c<<" = "<<a<<"²"<<std::endl;
	return 0;
}

float newton_method(int const c){								// Aufgabenteil b
	float x = c-0.5;
	float fx, fx1;
	for(unsigned int k= 0; k < 100 ; k++){
		fx = pow(x, 2)-c;										//f(x) = x² - c
		fx1 = 2*x;												//f(x)'= 2x
		x -= (fx / fx1);
		float x2 = x * x;
		long long tem = x * pow(10,12);
		float temp = tem / pow(10,12);
		//std::cout << x<<" "<<tem <<" " << temp<<std::endl;
		if(c==2 && temp == root2) {								// Test für Wurzel(2)
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;
			return x;}
		else if(c==3 && temp == root3) {						// Test für Wurzel(3)
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;
			return x;}
		else if(c==4 && temp == root4) {						// Test für Wurzel(4)
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;
			return x;}
		if(x * x == c) return x;								// Abbruch wenn x² = c
		std::cout.precision(12);
		std::cout << "||"<<k << ": "<< x << std::endl; 
	}
	return  x;
}
float bisection_method(int const c){							// Aufgabenteil c
	float bottom = 0;
	float top = 4;
	float mittel;
	for(unsigned int k = 0; k< 1000; k++){
		std::cout.precision(12);
		std::cout<<"||"<<k<<": "<<mittel<<std::endl;
		mittel = (top + bottom) / 2;
		float mittel2 = mittel * mittel;
		long long tem = mittel * pow(10,12);
		float temp = tem / pow(10,12);
		if(c == 2 && temp == root2) {							// Test für Wurzel(2);		
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;	
			return temp;}	
		else if(c== 3 && temp == root3) {						// Test für Wurzel(3)		
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;	
			return temp;}
		else if(c==4 && temp == root4) {						// Test für Wurzel(4);		
			std::cout << "||"<<k+1<<"te Iteration"<<std::endl;	
			return temp;}
		else if(mittel2 == c) return temp;						// Abbruch wenn x² = c					
		else if(mittel2 > c) top = mittel;
		else bottom = temp;
	}
	return mittel;
}
