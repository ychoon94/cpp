#include "Account.h"
#include <string>

#ifndef SAVING_H
#define SAVING_H

class Saving : public Account //establish inheritance relative
{
private:
  float interestRate;

public:
  Saving (std::string, float, float);
  float getInterestRate();
  float addInterest();
  std::string getStatement();
};

#endif
