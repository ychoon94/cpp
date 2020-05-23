#include "Employee.h"
#include <iostream>
#include <string>


Employee::Employee(std::string name, int age, float salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
}

float Employee::increment(float amount){
        salary = salary + amount;
        return true;
}

float Employee::getSalary(){
  return salary;

}

bool Employee::higherThan(float other) {
        if (salary > other) {
                return true;
        }
        return false;
}
