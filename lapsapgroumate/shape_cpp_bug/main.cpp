#include <iostream>
#include "shape.h"
#include "triangle.h"
#include "rect.h"
#include "square.h"

using namespace std;

int main(){
	int arrTri[]={3,4,5};
	int arrRec[]={3,4,3,4};
	int arrSqu[]={4,4,4,4};

	Triangle t1(3,arrTri);
	Rectangle r1(4,arrRec);
	Square s1(4,arrSqu);

	cout << "Triangle area : "<< t1.area() << endl;
	cout << "Rectangle area : "<< r1.area() << endl;
	cout << "Square area : "<< s1.area() << endl;

	return 0;
}
