#include "shape.h"

#ifndef RECT_H
#define RECT_H

using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle(int, float&);
	float area();
};

#endif
