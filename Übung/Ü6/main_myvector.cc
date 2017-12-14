#include <iostream>
#include <cmath>

#include "myvector.h"

int main(){
	//part b
	//vertices
	MyVector A;//local vector of A
	A.setValues(5, 0, 2);
	MyVector B(3, 1, 4);//local vector of B
	MyVector C(5, 3, 5);//local vector of C

	
	//part c
	//sides of triangle ABC
	MyVector a = C.subtract(B);
	MyVector b = C.subtract(A);
	MyVector c = B.subtract(A);

	//if 2 sides are orthogonal
	bool c_b_orth = c.isOrthogonal(b);
	bool c_a_orth = c.isOrthogonal(a);
	bool b_a_orth = b.isOrthogonal(a);
	bool abc_Orth;
	if(c_a_orth || c_b_orth || b_a_orth) abc_Orth = true;
	else abc_Orth= false;

	//part d
	//if all sides are the same length
	bool isosceles;
	if(c.length() == b.length() == a.length()) isosceles = true;
	else isosceles = false;

	//part e
	float alpha = 0;
	float beta = 0;
	float gamma = 0;
	//angles
	if(isosceles){//if all sides same length
		alpha = 60.0;
		beta = 60.0;
		gamma = 60.0;
	}else if(c_b_orth){//if alpha = 90°
		alpha = 90.0;
	}else if(c_a_orth){//if beta = 90°
		beta = 90.0;
	}else if(b_a_orth){//if gamma = 90°
		gamma = 90.0;
	}//for all angles which haven't been given a value yet
	if(alpha == 0) {alpha = c.angle(b);}
	if(beta == 0) {beta = c.angle(a);}
	if(gamma == 0) {gamma = b.angle(a);}
	//part f
	float area = b.area(c);//area of triangle ABC

	//part g
	//new vertex
	MyVector Anew = A.mult(2);
	MyVector Bnew = B.mult(2);
	MyVector Cnew = C.mult(2);
	//sides of triangle ABC
	MyVector aNew = Cnew.subtract(Bnew);
	MyVector bNew = Cnew.subtract(Anew);
	MyVector cNew = Bnew.subtract(Anew);
	//area of triangle (Anew Bnew Cnew)
	float areaNew = bNew.area(cNew);


	//OutPut
	std::cout<<std::endl<<"Dreieck ABC:"<<std::endl;
	std::cout<<"	A ";
	A.print();
	std::cout<<std::endl<<"	B ";
	B.print();
	std::cout<<std::endl<<"	C ";
	C.print();
	std::cout<<std::endl<<std::endl;


	//output part c
	std::cout<<"c|"
	<<"	Das Dreieck ABC ist ";
	if(abc_Orth == false) std::cout <<"nicht ";
	std::cout<<"rechtwinklig."<<std::endl<<std::endl;

	//output part d
	std::cout<<"d|"
	<<"	Das Dreieck ABC ist ";
	if(isosceles == false) std::cout <<"nicht ";
	std::cout<<"gleichschenklig."<<std::endl<<std::endl;

	//output part e
	std::cout<<"e|"
	<<"	Der Winkel alpha betraegt "<<alpha<<"°"<<std::endl
	<<"	Der Winkel beta  betraegt "<<beta<<"°"<<std::endl
	<<"	Der Winkel gamma betraegt "<<gamma<<"°"<<std::endl<<std::endl;

	//output part f
	std::cout<<"f|"
	<<"	Der Flaescheninhalt des Dreiecks betraegt "<<area<<" FE."<<std::endl<<std::endl;

	//output g
	std::cout<<"g|"
	<<"	Das Dreieck mit den neuen Eckpunkten:"<<std::endl
	<<"	A=";
	Anew.print();
	std::cout<<", B=";
	Bnew.print();
	std::cout<<" und C=";
	Cnew.print();
	std::cout << std::endl<<"	hat den Flaescheninhalt "<<areaNew<<" FE."<<std::endl<<std::endl;


	return 0;
}