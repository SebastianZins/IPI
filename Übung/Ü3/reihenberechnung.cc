#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  double summeTeilA, summeTeilB; // Variablen zum Speichern
  int i=1;                       // Laufvariable


  summeTeilA = 0;
  // [pi]² / 6 ~> 1,6443135 ~> 1,64
  while(summeTeilA <= 1.6){		
  	summeTeilA += (double)1/ (i*i);
  	i++;
  }		

  cout << "Die Summe aus Teil a ergibt:  " << summeTeilA << endl;
  
  i = 1;
  summeTeilB = 0;
  // [pi]² / 12 ~> -0,82215675 ~> -0,822
  while(i < 1000){
  	double zwischen = (double)1/ (i*i);
  	if(i%2 == 1) zwischen *= -1;
  	summeTeilB += zwischen;
  	cout << i << " " << summeTeilB << endl;
  	i++;
  }	

  cout << "Die Summe aus Teil b ergibt:  " << summeTeilB << endl;
  
  return 0;
}

