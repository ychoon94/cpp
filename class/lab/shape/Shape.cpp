#include "Shape.h"
#include <vector>

Shape::Shape(int nSides, std::vector<double>& sLength){
  this ->numSides = nSides;
  this->sideLengths = sLength;
}
