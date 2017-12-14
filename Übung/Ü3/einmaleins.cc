#include <iostream>
using namespace std;



int main(int argc, char ** argv){
	const int N = 10;
	for(int i= N; i>0; i--){
		for(int c= N; c>0; c--){
			cout.width(4);
			cout <<i*c;
		}
		cout << endl;
	}  
  return 0;
}

