#include<iostream>
#include<string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee{
private:
	std::string name;
	int age;
	float salary;

public:
  Employee(std::string name, int age, float salary);
	float increment(float amount);
  float getSalary();
  bool higherThan(float other);
};

#endif
