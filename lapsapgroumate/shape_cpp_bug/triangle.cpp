#include "triangle.h"
#include "shape.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(int numSides,int sideLengths[]):Shape(numSides,sideLengths){

}

float Triangle::area(
	int perimeter = (sideLengths[0]+sideLengths[1]+sideLengths[3])/2;
	float area = (float)sqrt((perimeter * (perimeter - sideLengths[0]))*
				(perimeter - sideLengths[1])*
				(perimeter - sideLengths[2]));
				return area;
)
