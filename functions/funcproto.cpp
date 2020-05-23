//shift, scaled integers produced by 1 + rand() % 6

#include <iostream>
#include <iomanip>

int main(){
  for (int counter = 1; counter <=20; counter++){
    std::cout << std::setw(10) << (rand() % 6 +1);

    if (counter %5==0){
      std::cout << '\n';
    }
  }
  return 0;
}
