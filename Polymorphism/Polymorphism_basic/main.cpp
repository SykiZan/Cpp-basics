
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "Trust_Account.h"

using namespace std;



 int main() {
    cout.precision(2);
    cout << fixed;
	
	
	//Just simple test cases
	
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
    Savings_Account s{"Max",1000};
	cout<<s<<endl;
	s.withdraw(50);
	cout<<s<<endl;
	s.deposit(500);
	cout<<s<<endl;

 

    vector<Account *> accounts{};
	Account *a1 = new Account{"James",1000};
	Account *a2 = new Account{"Bond",3500};
	Account *a3 = new Account{"Rita",4000};
	Account *a4 = new Account{"Ivan",2000};
	
	accounts.push_back(a1);
	accounts.push_back(a2);
	accounts.push_back(a3);
	accounts.push_back(a4);
	
	display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
	
	vector<Account *> sav_accounts{};
	Account *s1 = new Savings_Account{"Silva",2228};
	Account *s2 = new Savings_Account{"Halsey",3573};
	
	
	sav_accounts.push_back(s1);
	sav_accounts.push_back(s2);
	
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
    
    vector<Account *> c_accounts{};
	Account *c1 = new Checking_Account{"Eddie",2244};
	Account *c2 = new Checking_Account{"Spartacus",9671};
	
	c_accounts.push_back(c1);
	c_accounts.push_back(c2);
	
    display(c_accounts);
    deposit(c_accounts, 1000);
    withdraw(c_accounts,2000);
	
	vector<Account *> t_accounts{};
	Account *t1 = new Trust_Account{"Torry",6666};
	Account *t2 = new Trust_Account{"Shmidt",3333};
	
	t_accounts.push_back(t1);
	t_accounts.push_back(t2);
	
    display(t_accounts);
    deposit(t_accounts, 1000);
    withdraw(t_accounts,20);
	 withdraw(t_accounts,20);
	  withdraw(t_accounts,2);
	   withdraw(t_accounts,1);
	    withdraw(t_accounts,0);
           
		   
		return 0;
}

