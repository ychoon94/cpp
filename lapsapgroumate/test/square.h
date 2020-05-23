#include "rect.h"
#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square : public Rectangle
{
public:
	Square(int,float&);
	float area();
};

#endif
