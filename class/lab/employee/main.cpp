#include "Employee.h"
#include <iostream>

int main(){
  Employee emp1("Danny", 30, 3000);
  Employee emp2("Danish", 23, 3400);

  emp1.increment(3000);

  if (emp1.higherThan(emp2.getSalary())){
    std::cout << "Danny has higher salary than Danish." << '\n';
  }else{
    std::cout << "Danish has higher salary than Danny." << '\n';
  }
  return 0;
}
