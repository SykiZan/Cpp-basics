#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"


class Trust_Account: public Savings_Account {
	
friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);


static constexpr int max_withdrawals = 3;

protected:
      int count_withdrawals;
	
public:

	//Constructor
	Trust_Account(std::string name = "Unnamed Trust Account" , double balance = 0.0 , double int_rate = 0.0  );

   //functions
   bool deposit(double amount);
   bool withdraw(double amount);
   

};

#endif // TRUST_ACCOUNT_H

