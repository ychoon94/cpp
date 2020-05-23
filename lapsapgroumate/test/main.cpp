#include <iostream>
#include "shape.h"
#include "triangle.h"
#include "rect.h"
#include "square.h"

using namespace std;

int main(){
	int nSidesT = 3;
	int nSidesRS = 4;

	float arrTri[]={4,4,4};
	float arrRec[]={3,4,3,4};
	float arrSqu[]={4,4,4,4};

	Shape *t;
	Triangle triangle{nSidesT, arrTri[3]};
	t = &triangle;

	Shape *r;
	Rectangle rectangle(nSidesRS, arrRec[4]);
	r = &rectangle;

	Shape *s;
	Square square(nSidesRS, arrSqu[4]);
	s = &square;


								cout << "Triangle area : "<< t -> area() << endl;
								cout << "Rectangle area : "<< r -> area() << endl;
								cout << "Square area : "<< s -> area() << endl;

								return 0;
}
