#include <iostream>
#include <cmath>
#include <string>

//functions of subtasks
void partA();
void partB();
void partC();
void partD();
void partE();

//functions general
void swap1(double a, double b);						//part c - swap version 1
void swap2(double &a, double &b);					//part c - swap version 2
void swap3(double *a, double *b);					//part c - swap version 3
double* maximum_value(double *a, int size);			//part d - maximum value
int length_string(const char *str);					//part e - string length
void reverse_string(char* str);						//part f - reverse string

//##################################################
int main(){	
	partA();
	partB();
	partC();
	partD();
	partE();

	//part f - reverse string
	std::cout<<std::endl<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil f:"<<std::endl
	<<"------------------------------------------------------"<<std::endl;
	char str[] = "Sebastian";
	std::cout << str << " umgekehrt ist ";
	reverse_string(str);
	std::cout<<std::endl;
	return 0;
}
//##################################################

void partA(){//subtask a
	std::cout<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil a:"<<std::endl
	<<"------------------------------------------------------"<<std::endl;
	int var = 10;
	int* pointer = &var;							//pointer points on address of var
	std::cout<<"Variable = "<<var;
	*pointer = 12;									//changes value of var
	std::cout<<", Pointer = 12 => Variable = "<<var<<std::endl;
	return;
}
void partB(){//subtask b
	std::cout<<std::endl<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil b:"<<std::endl
	<<"------------------------------------------------------"<<std::endl
	<<"a1 = 15, a2 = 20 || p1 -> a1, p2 -> a2"<<std::endl;
	for(int i=0;i<2;i++){
		int  a1 =  15;	int  a2 =  20;				
		int* p1 = &a1;	int* p2 = &a2;				//p1 -> a1, p2 -> a2
		if(i == 0) {
			*p1 = *p2;								//sets value of a1 to value of a2
			std::cout<<"*p1 = *p2"<<std::endl
			<<"a1 = "<<a1<<", a2 = "<<a2<<" || p1 -> a1, p2 -> a2"<<std::endl;}
		else if(i==1) {
			p1 = p2;								//p1 points at address of p2
			std::cout<<" p1= p2"<<std::endl
			<<"a1 = "<<a1<<", a2 = "<<a2<<" || p2 -> p1 -> a2"<<std::endl;}
	}
	return;
}
void partC(){//subtask c
	std::cout<<std::endl<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil c:"<<std::endl
	<<"------------------------------------------------------"<<std::endl
	<<"Vor 1: a = 7, b = 12"<<std::endl;
	double a = 7; 	double b = 12;
	swap1(a, b);
	std::cout<<"Nach 1: a = "<<a<<", "<<b<<std::endl;
	swap2(a, b);
	std::cout<<"Nach 2: a = "<<a<<", "<<b<<std::endl;
	swap3(&a, &b);
	std::cout<<"Nach 3: a = "<<a<<", "<<b<<std::endl;
	return;
}
void partD(){//subtask d
	std::cout<<std::endl<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil d:"<<std::endl
	<<"------------------------------------------------------"<<std::endl;
	double a[5] = {1., 4., 12., 3., 5.};			
	int size = 5;
	double* max = maximum_value(a, size);
	std::cout << "Adresse auf größten Array-Wert "<<max<<" mit Wert "<<*max<<std::endl;
	return;
}
void partE(){//subtask e
	std::cout<<std::endl<<"______________________________________________________"<<std::endl
	<<"Aufgabenteil e:"<<std::endl
	<<"------------------------------------------------------"<<std::endl;
	char name[]= "Sebastian";						//string as array of type char
	int size = length_string(name);
	std::cout<<"String = Sebastian | Länge = "<<size<<std::endl;
}

void swap1(double a, double b){						//part a - swap version 1
	double temp;									//swaps value of pointers of a and b without returning 
	temp = b;
	b = a;
	a = b;
	std::cout.width(8);
	std::cout<<"In 1: "<<a<<", "<<b<<std::endl;
	return;
}
void swap2(double &a, double &b){					//part b - swap version 2
	double temp;									//swaps value of pointers a anb b and swaps values of original variable
	temp = b;
	b = a;
	a = b;
	std::cout.width(8);
	std::cout<<"In 2: "<<a<<", "<<b<<std::endl;
	return;
}
void swap3(double *a, double *b){					//part c - swap version 3
	double* temp = NULL;							//swaps address of a and b to which they point
	temp = b;
	b = a;
	a = b;
	std::cout.width(8);
	std::cout<<"In 3: "<<*a<<", "<<*b<<std::endl;
	return;
}
double* maximum_value(double *a, int size){			//part d - maximum value
	double* maxPos = a;
	for (int i = 0; i < size; ++i){					//for every item in a
		if(*maxPos < *(a +i)){						//if a > max set max to a
			maxPos = a +i;
		}
	}
	return maxPos;
}
int length_string(const char *str){					//part e - length of string
	int size = 0;
	int i = 0;
	while(str[i]!=0){								//count aslong as there is a element to count
		size++;
		i++;}
	return size;
}
void reverse_string(char* str){						//part f - reverse string
	int length = length_string(str);
	int iteration;
	if(length%2==0) iteration = length/2;			//if length even	
	else iteration = (length-1)/2;					//if length uneven	
	for(int i= 0; i<iteration; i++){
		char temp = str[i];							
		str[i] = *(str + (length-i-1));
		*(str + (length-i-1))=temp;
	}
	std::cout <<str<<std::endl;
	return;
}
