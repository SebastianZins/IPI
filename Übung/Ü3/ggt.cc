#include <iostream>
using namespace std;

int Teiler(int a, int b){
	if(a == 0) return b;
	else if(b == 0) return a;
	else if(a>b) a = a - b;
	else  b = b - a;
	return Teiler(a,b);
}

int main(int argc, char *argv[])
{
  int a, b;  // die ganzen Zahlen, deren ggT berechnet werden soll
  int ggt;   // Variable zum Speichern des ggT
  
  a = 123;
  b= 1968;

  ggt = Teiler(a,b);
  
  cout << "Der groesste gemeinsame Teiler ist:  " << ggt << endl;
  
  return 0;
}
