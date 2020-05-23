#include "Account.h"
#include "Saving.h"
#include <iostream>


int main(){
								Account acct("1234",5000);
								acct.deposit(1000);
								acct.withdraw(500);
								std::cout<<acct.checkBalance() << '\n';
								Saving sa("2222", 6000, 0.03);
								sa.addInterest();
								std::cout << "Saving: " << sa.checkBalance() << '\n';

								Account *a1;
								Saving s1("2222", 6000, 0.03);
								a1 = &s1;
								std::cout << a1 -> getStatement() <<'\n';
								return 0;
}
