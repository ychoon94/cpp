#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(int numSides, int sideLengths[]){
	this->numSides = numSides;
	for(int i =0;i<numSides;i++){
		this->sideLengths[i]=sideLengths[i];
	}
}
