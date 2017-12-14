#include <iostream>

void sort(int (&a) [10]);

int main(int argc, char const *argv[])
{
	int a [10] = {12,6,10,2,1,22,4,16,12,7};
	sort(a);

	for(int i = 0; i < 10; i++){
		std::cout << "Eintrag "<<i+1<<": "<<a[i]<<std::endl;
	}

	return 0;
}

void sort(int (&a) [10]){
	int min, minIndex;
	for(int f = 0; f < 10-1; f++){
		min = a[f];
		minIndex = f;
		for(int i = 0 + f; i < 10; i++){ 
			if(a[i] < min) {
				min = a[i];
				minIndex = i;
			}
		}
		a[minIndex]=a[f];
		a[f]=min;
	}
}