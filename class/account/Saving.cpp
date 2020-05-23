#include "Saving.h"

Saving::Saving (std::string acctNo, float balance, float interestRate)
  :Account(acctNo, balance){
  this -> interestRate = interestRate;
}

float Saving::getInterestRate(){
  return interestRate;
}

float Saving::addInterest(){
  balance = balance + balance * interestRate;
}

std::string Saving::getStatement(){
  return "Account type : Saving";
}
