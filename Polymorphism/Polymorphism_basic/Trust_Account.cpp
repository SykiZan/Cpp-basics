#include "Trust_Account.h"
	
Trust_Account::Trust_Account(std::string name , double balance , double int_rate )
                     : Savings_Account{name , balance , int_rate}  ,count_withdrawals {0}
{
	
}
bool Trust_Account::deposit (double amount)
{
	if(amount >=5000)
	   amount += amount * (int_rate/100) +50 ;
	else 
	{
		amount += amount * (int_rate/100);
	}
	return Account::deposit(amount);
	
}

bool Trust_Account::withdraw(double amount)
{
    if(count_withdrawals >= max_withdrawals || amount > 0.2 * balance)
       return false;
   else {
        bool result = Account::withdraw(amount);
        if (result)
           count_withdrawals++;
        return result;
    }
}



void Trust_Account::print(std::ostream &os) const
{
	os << "[Trust_Account: " << name << ": " << balance << ", " << int_rate << "%"<< " ,"<<
	count_withdrawals<<" ]";;
}


   