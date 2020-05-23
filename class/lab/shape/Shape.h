#ifndef SHAPE_H
#define SHAPE_H
#include <vector>

class Shape{
public:
  Shape(int, std::vector<double>&);
  int numSides;
  std::vector<double> sideLengths;
  virtual double area(std::vector<double>&) = 0;
};




#endif /* end of include guard: SHAPE_H */
