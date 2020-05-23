#include "Rectangle.h"
#include <iostream>
#include <vector>

Rectangle::Rectangle(int numSides, std::vector<double>&)
: Shape(4, sideLengths){
}

double Rectangle::area(std::vector<double>& sLengths){
  double Area;
  if (sLengths.size() == 2){
    Area = sLengths[0] * sLengths[1];
    return Area;
  }else{
    std::cout << "Number of sidelengths doesn't represent rectangle.\n";
    return false;
  }
}
