#include "shape.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle : public Shape
{
public:
	Triangle(int,float&);
	float area();
};

#endif
