#include "shape.h"

using namespace std;

Shape::Shape(int nSides, float& sLengths){
								this->numSides = nSides;
								this->sideLengths[numSides] = {};
								for(int i =0; i < nSides; i++) {
																this->sideLengths[i] = sLengths;
								}
}
