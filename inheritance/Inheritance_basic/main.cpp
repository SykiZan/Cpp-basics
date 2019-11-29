
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Trust_Account.h"

using namespace std;



 int main() {
    cout.precision(2);
    cout << fixed;
	
	
	Checking_Account c{"Tim",1000};
	cout<<c<<endl;
	c.withdraw(500);
	cout<<c<<endl;
	c.deposit(500);
	cout<<c<<endl;
	Trust_Account t{"Bob",1000};
	cout<<t<<endl;
	t.withdraw(50);
	cout<<t<<endl;
	t.deposit(500);
	cout<<t<<endl;

    // Accounts
    vector<Account > accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    

 // Checking_Accounts
    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {});
    check_accounts.push_back(Checking_Account {"Ursa"});
    check_accounts.push_back(Checking_Account {"Lich king", 2000} );
    check_accounts.push_back(Checking_Account {"Paladin", 5000} );
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts,2000);
	
	
	
	// Trust_Accounts
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {});
    trust_accounts.push_back(Trust_Account {"Prank"});
    trust_accounts.push_back(Trust_Account {"Crank", 2000} );
    trust_accounts.push_back(Trust_Account {"Tim Buchalka", 5000} );
    
	
	
    display(trust_accounts);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts,2000);
   	 withdraw(trust_accounts,1000);
	  withdraw(trust_accounts,50);
	   withdraw(trust_accounts,10);
	    withdraw(trust_accounts,10);
           

    return 0;
}

