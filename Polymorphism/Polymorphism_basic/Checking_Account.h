#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"


class Checking_Account : public Account{
	
protected:
	double fee {1.50};
public:
	//Constructor
	Checking_Account(std::string name ="Unnamed Chekicng_Acoount", double balance=0.0 , double fee = 1.50);
	//methods
	virtual bool withdraw(double amount) override ;
	virtual bool deposit(double amount) override;
	virtual void print(std::ostream &os) const override;
	virtual ~Checking_Account() = default;

};

#endif // CHECKING_ACCOUNT_H


