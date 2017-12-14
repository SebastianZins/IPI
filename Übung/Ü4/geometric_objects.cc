#include <iostream>
#include <vector>

const double pi = 3.14159;

//4.2|a:	zewidimensionale Objekte
inline double circumference_rectangle(double a, double b);
inline double area_rectangle(double a, double b);
inline double circumference_square(double a);
inline double area_square(double a);
inline double circumference_circle(double r);
inline double area_circle(double r);

//4.2|b:	dreidimensionale Objekte
inline double surface_area_cuboid(double a, double b, double c);
inline double volume_cuboid(double a, double b, double c);
inline double surface_area_cube(double a);
inline double volume_cube(double a);
inline double surface_area_sphere(double r);
inline double volume_sphere(double r);


int main(int argc, char const *argv[])
{
	int n, x=1;
	double a,b,c;

	std::vector<std::string> object = {{"Rechteck", "Quadrat", "Kreis", "Quader", "Würfel", "Kugel"}}; //verschiedene Objekte

	//1. Eingabe 2-/3-dimensionales Objekt
	std::cout << "Geben Sie eine Dimension ein...  ";		
	while(x==1){	//wdh bis 1<n<4
		std::cin >> n;
		std::cout<<"\n";
		if(n<2 || n >3 || std::cin.fail()) {
			std::cout<<"Ihr Objekt kann nur entweder zwie- oder dreidimensional sein!"; //falsche Eingabe
			std::cout<<"\nVersuchen Sie es nochmal...  ";
			std::cin.clear(); std::cin.ignore();}
		else x = 0;
	}
	//Auflistung der Objekte der gewaelten Dimension
	std::cout<<"Welches Objekt möchten Sie betrachten?\n";	
	for (int i = 0; i< object.size()/2;i++){
		std::cout<<i<<" - "<<object[i + object.size()/2 * (n-2)] << std::endl;
	}
	//2. Eingabe welches Objekt
	char objNum;
	while(x==0){	//wdh bis Eingabe korrekt
		std::cin >> objNum; 
		std::cout << std::endl;
		if(n==2 && objNum == '0') {std::cout << "Geben Sie die Seitenlaengen des Rechtecks ein: ";				//Rechteck
			std::cin >> a >> b;x = 1;
			double circum = circumference_rectangle(a,b);
			double area = area_rectangle(a,b); 
			std::cout << "\nDas Rechteck hat einen Umfang von "<<circum<<" und eine Flaeche von "<<area;
		}else if(n==2 && objNum == '1') {std::cout << "Geben Sie die Seitenlaenge des Quadrats ein: ";			//Quadrat
			std::cin >> a;x = 1;
			double circum = circumference_square(a);
			double area = area_square(a);
			std::cout << "\nDas Quadrat hat einen Umfang von "<<circum<<" und eine Flaeche von "<<area;
		}else if(n==2 && objNum == '2') {std::cout << "Geben Sie den Radius des Kreises ein: ";					//Kreis
			std::cin >> a;x = 1;
			double circum = circumference_circle(a);
			double area = area_circle(a);
			std::cout << "\nDer Kreis hat einen Umfang von "<<circum<<" und eine Flaeche von "<<area;
		}else if(n==3 && objNum == '0') {std::cout << "Geben Sie die Seitenlaengen des Quaders ein: ";			//Quader
			std::cin >> a >> b >> c;x = 1;
			double surface = surface_area_cuboid(a,b,c);
			double volume = volume_cuboid(a,b,c);
			std::cout << "\nDer Quader hat einen Oberflaecheninhalt von "<<surface<<" und ein Volumen von "<<volume;
		}else if(n==3 && objNum == '1') {std::cout << "Geben Sie die Seitenlaenge des Wuerfels ein: ";			//Wuerfel
			std::cin >> a ;x = 1;
			double surface = surface_area_cube(a);
			double volume = volume_cube(a);
			std::cout << "\nDer Wuerfel hat einen Oberflaecheninhalt von "<<surface<<" und ein Volumen von "<<volume;
		}else if(n==3 && objNum == '2') {std::cout << "Geben Sie den Radius der Kugel ein: ";					//Kugel
			std::cin >> a; x = 1;
			double surface = surface_area_sphere(a);
			double volume = volume_sphere(a);
			std::cout << "\nDie Kugel hat einen Oberflaecheninhalt von "<<surface<<" und ein Volumen von "<<volume;
		}else std::cout <<objNum<< " war nicht gelistes.\nVersuchen Sie es nochmal... ";						//falsche Eingabe
	}std::cout << std::endl;

	return 0;
}

//4.2|a:	zewidimensionale Objekte
inline double circumference_rectangle(double a, double b){				//Rechteck Umfang
	return 2*a + 2*b;
}
inline double area_rectangle(double a, double b){						//Rechteck Volumen
	return a * b;
}
inline double circumference_square(double a){							//Quatrat Umfang
	return 4*a;
}
inline double area_square(double a){									//Quadtrat Volumen
	return a*a;
}
inline double circumference_circle(double r){							//Kreis Umfang
	return 2*pi*r;
}
inline double area_circle(double r){									//Kreis Volumen
	return pi * r * r;
}

//4.2|b:	dreidimensionale Objekte
inline double surface_area_cuboid(double a, double b, double c){		//Quader Oberflaeche
	return 2*(a*b + a*c + b*c);
}
inline double volume_cuboid(double a, double b, double c){				//Quader Volumen
	return a*b*c;
}
inline double surface_area_cube(double a){								//Wuerfel Oberflaeche
	return 6 * a * a;
}
inline double volume_cube(double a){									//Wuerfel Volumen
	return a * a * a;
}
inline double surface_area_sphere(double r){							//Kugel Oberflaeche
	return 4 * pi * r * r;	
}
inline double volume_sphere(double r){									//Kugel Volumen
	return (4/3) * pi * r*r*r;
}