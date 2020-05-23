#include <iostream>
#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
public:
	Account (std::string,float);
	float checkBalance();
	bool withdraw(float);
	bool deposit(float);
	virtual std::string getStatement();

private:
	std::string acctNo;

protected:
	float balance;
};

#endif
