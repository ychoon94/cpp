#include "rect.h"

using namespace std;

Rectangle::Rectangle(int nSides, float&)
: Shape(4,sideLengths[4]){
}

float Rectangle::area(){
								float area;
								area = sideLengths[0] * sideLengths[1];
								return area;
}
