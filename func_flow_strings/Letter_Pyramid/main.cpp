
/*
 * 
 * Makes pyramid out of a string e.g.
 * input : 12345678
 * 
 * output :  

 * 
 *     1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321
 * 
 * 
 * */

#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
int main(){
	
  string s{}; // this is 1st part of string counting up e.g. 12345
  string tail_s{};// 2nd part counting down e.g. 4321
  cout<<"Give me a string"<<endl;
  getline(cin,s);
  cout<<endl<<endl;
  
   for(size_t i{0} ,  l{s.length()} ; i<s.length();  ++i,l--){
	   
	   string space(l-1, ' ');
	   
        if (i==0){
			cout<<space<<s.substr(0,i+1)<<endl;
			tail_s=s.at(0);
			
		}
		else {
		   cout<<space<<s.substr(0,i+1) + tail_s<<endl;  // combining start and tail (final result = ) )
		   tail_s=s.at(i) + tail_s;
		   
}
 
}
    cout<<endl<<endl<<endl<<endl<<endl;
 
    return 0;
}