#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <vector>

Triangle::Triangle(int numSides, std::vector<double>&)
: Shape(3, sideLengths){
}

double Triangle::area(std::vector<double>& sLengths){
  double s, Area;
  if (sLengths.size() == 3){
    s = (sLengths[0] + sLengths[1] + sLengths[2]) / 2;
    Area = sqrt(s * (s - sLengths[0]) * (s - sLengths[1]) * (s - sLengths[2]));
    return Area;
  } else{
    std::cout << "Error in number of sideLengths doesn't represent triangle.\n";
    return false;
  }
}
