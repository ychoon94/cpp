#include "Account.h"

Account::Account(std::string acctNo,float balance){
								this->balance=balance;
								this->acctNo=acctNo;
}
float Account::checkBalance(){
								return balance;
}

bool Account::deposit(float amt){
								if (amt>0) {
																balance=balance+amt;
																return true;
								}
								return false;
}

bool Account::withdraw(float amt){
								if (amt<=balance) {
																balance=balance-amt;
																return true;
								}
								return false;
}

std::string Account::getStatement(){
	return "Account type : General";
}
