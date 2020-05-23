#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
#include <vector>

class Square : public Rectangle{
public:
  Square(int, std::vector<double>&);
  double area(std::vector<double>&);
};

#endif /* end of include guard: SQUARE_H */
