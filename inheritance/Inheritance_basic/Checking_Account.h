#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"


class Checking_Account : public Account{
	friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
protected:
	double fee {1.50};
public:
	//Constructor
	Checking_Account(std::string name ="Unnamed Chekicng_Acoount", double balance=0.0 , double fee = 1.50);
	//methods
	bool withdraw(double amount);

};

#endif // CHECKING_ACCOUNT_H

