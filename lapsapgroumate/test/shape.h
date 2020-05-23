#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class Shape
{
public:
	Shape(int, float&);
	int numSides;
	float sideLengths[];
	virtual float area()=0;
};

#endif
