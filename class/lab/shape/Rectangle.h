#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <vector>

class Rectangle : public Shape{
public:
  Rectangle(int, std::vector<double>&);
  double area(std::vector<double>&);
};


#endif /* end of include guard: RECTANGLE_H */
