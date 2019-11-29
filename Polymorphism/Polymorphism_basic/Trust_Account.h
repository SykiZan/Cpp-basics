#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"


class Trust_Account: public Savings_Account {
	
static constexpr int max_withdrawals = 3;

protected:
      int count_withdrawals;
	
public:

	//Constructor
	Trust_Account(std::string name = "Unnamed Trust Account" , double balance = 0.0 , double int_rate = 0.0  );

   //functions
   virtual bool deposit(double amount) override;
   virtual bool withdraw(double amount) override;
   virtual void print(std::ostream &os) const override;
   virtual ~Trust_Account() = default;
   

};

#endif // TRUST_ACCOUNT_H

