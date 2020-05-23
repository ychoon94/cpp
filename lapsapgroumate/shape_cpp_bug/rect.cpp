#include "rect.h"
#include "shape.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int numSides, int sideLengths[]):Shpae(numSides,sideLengths){

}

float Rectangle::area(){
	float area=(float(sideLengths[0]*sideLengths[1]));
	return area;
}
