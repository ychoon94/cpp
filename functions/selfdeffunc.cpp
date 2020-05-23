#include <iostream>

/*
int square(int);

int main(){
        for (int x = 1; x<=10; x++) {
                std::cout << square(x) << " ";
        }
        std::cout << '\n';

        return 0;
}

int square (int y){
        return y*y;
}
*/

double maximum (double, double, double);

int main(){
  double number1;
  double number2;
  double number3;

  std::cout << "Enter three floating-point numbers: ";
  std::cin >> number1 >> number2 >> number3;

  std::cout << "Maximum is: "
  << maximum(number1, number2, number3) << '\n';

  return 0;
}

double maximum(double x, double y, double z){
  double max = x; //assume x is largest

  if (y>max){
    max = y;
  }

  if (z > max){
    max = z;
  }

  return max;
}
