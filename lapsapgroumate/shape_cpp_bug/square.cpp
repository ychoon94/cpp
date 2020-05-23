#include "square.h"
#include "shape.h"
#include <iostream>
#include <math.h>

using namespace std;

Square::Square(int numSides,int sideLengths[]):Rectangle(numSides,sideLengths){

}

float Square::area(){
	float area = (pow(sideLengths[0],2.0));
	return area;
}
