#include <iostream>
 
#include <vector>
 
 
using namespace std;
 
 
int main(){
 
 cout<<"Enter an amount in cents: ";
 
 int cents{};
 
 cin>>cents;
 
 cout<<cents<<" cents "<<" can be provided as :"<<endl;
 
 cout<<"Dollars : "<<cents/100<<endl;
 
 int dollars{cents/100};
 
 cout<<"Quarters : "<<(cents-dollars*100)/25<<endl;
 
 int quarters {(cents-dollars*100)/25};
 
 cout<<"Dimes : "<<(cents-dollars*100-quarters*25)/10<<endl;
 
 int dimes{(cents-dollars*100-quarters*25)/10};
 
 cout<<"Nickels : "<<(cents-dollars*100-quarters*25-dimes*10)/5<<endl;
 
 int nickels {(cents-dollars*100-quarters*25-dimes*10)/5};
 
 cout<<"Pennies : "<<(cents-dollars*100-quarters*25-dimes*10-nickels*5)<<endl;

 return 0;
 
} 
