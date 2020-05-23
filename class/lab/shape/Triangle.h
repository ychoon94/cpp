#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include <vector>

class Triangle : public Shape{
public:
  Triangle(int, std::vector<double>&);
  double area(std::vector<double>&);
};


#endif /* end of include guard: TRIANGLE_H */
