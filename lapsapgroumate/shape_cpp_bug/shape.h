#include <iostream>
#include <string>
#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class Shape
{
	public: Shape(int,int[]);
		    virtual float area()=0;

	protected:int numSides;
			  int sideLengths;
};

#endif
