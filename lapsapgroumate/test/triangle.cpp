#include "triangle.h"
#include "shape.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(int nSides,float&)
: Shape(3,sideLengths[3]){

}

float Triangle::area(){
	int perimeter;
	perimeter = (sideLengths[0] + sideLengths[1] + sideLengths[3]) /2;

	float area;
	area = (float)sqrt((perimeter * (perimeter - sideLengths[0]))*
	(perimeter - sideLengths[1])*
	(perimeter - sideLengths[2]));

	return area;

}
