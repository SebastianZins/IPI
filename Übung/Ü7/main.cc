#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "sphere.h"
#include "circle.h"
#include "cuboid.h"
#include "cube.h"

int main(){

	Cube cube = Cube(4);
	std::cout << cube.getHeight()<<" "<<cube.getVolume()<<std::endl;
	return 0;
}