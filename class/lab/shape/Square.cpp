#include "Square.h"
#include <iostream>
#include <vector>

Square::Square(int numSides, std::vector<double>&)
: Rectangle(4, sideLengths){
}

double Square::area(std::vector<double>& sLengths){
  double Area;
  if (sLengths.size() == 2){
    Area = sLengths[0] * sLengths[1];
    return Area;
  }else{
    std::cout << "Number of sidelengths doesn't represent rectangle.\n";
    return false;
  }
}
