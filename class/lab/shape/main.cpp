#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
#include <vector>
#include <limits>

int main(){
  int side;
  std::vector<double>sLengths;
  double input;

  std::cout << "Please enter the number of sides: ";
  if (std::cin >> side){
    //triangle validation
    if (side == 3){
      int count = 0;
      while (count != 3){
        std::cout<< "Enter the side lengths for the triangle: ";

        //input validation to ensure no invalid input
        //if cin able to store value into variable
        //meaning it is true.
        if (std::cin >> input){
          sLengths.push_back(input);
          count++;
        }else{
          std::cout << "Enter integer or decimal only!\n";
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          continue;
        }
      }
      Triangle Tri1(side, sLengths);
      std::cout << "It is a Triangle.\n";
      std::cout << "The area for triangle is " << Tri1.area(sLengths) << ".\n";
    }
    //rectangle validation
    else if (side == 4){
      int count = 0;
      while (count != 2){
        if (count == 0){
          std::cout<< "Enter the length for the sides: ";
          //input validation to ensure no invalid input
          //if cin able to store value into variable
          //meaning it is true.
          if (std::cin >> input){
            sLengths.push_back(input);
            count++;
          }else{
            std::cout << "Enter integer or decimal only!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
          }
        } else if (count == 1){
          std::cout<< "Enter the width for the sides: ";
          //input validation to ensure no invalid input
          //if cin able to store value into variable
          //meaning it is true.
          if (std::cin >> input){
            sLengths.push_back(input);
            count++;
          }else{
            std::cout << "Enter integer or decimal only!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
          }
        } //end inner if else if
      } //end while count !=2 loop

      std::cout << '\n';

      //check if square or rectangle by equating the side lengths
      if (sLengths[0] == sLengths[1]){
        Square Squ1(side, sLengths);
        std::cout << "This is a square.\n";
        std::cout << "The area for square is " << Squ1.area(sLengths) << ".\n";
      } else if (sLengths[0] != sLengths[1]){
        Rectangle Rec1(side, sLengths);
        std::cout << "This is a rectangle.\n";
        std::cout << "The area for rectangle is " << Rec1.area(sLengths) << ".\n";
      }
    } else {
      std::cout << "Please enter a correct number of sides. \n";
    }

  } else {
    std::cout << "Please enter a valid input. \n";
  }

  return 0;

} //end main function
