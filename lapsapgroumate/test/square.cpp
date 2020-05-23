#include "square.h"
#include <math.h>

using namespace std;

Square::Square(int nSides,float&)
: Rectangle(4,sideLengths[4]){

}

float Square::area(){
								float area = (pow(sideLengths[0],2.0));
								return area;
}
