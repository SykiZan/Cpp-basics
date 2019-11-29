

// Cipher your message :)

#include <iostream>
#include <string>
using namespace std;
int main() {
					   
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHI'JKLMNOPQRSTUVWXYZ123456789 `;%./\*&^"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgj'hqdyvtkfuompciasr986734521 `;%./\*&^"};
	
	string human;
	string code;
	cout<<"Enter your massage here :"<<endl;
	getline(cin,human);
	
	
	
	int	position{};
	string ciphered{};


cout<<endl;

	cout<<"your massage in cipher is :"<<endl;
	
	for(auto i:human){
	position = alphabet.find(i) ;
	   if(position!=string::npos){
		   char new_char {key.at(position)};
		   ciphered += new_char;
	   }else{
		   ciphered += i;
	   }
	 
	}
	cout<<ciphered<<endl;
	
    cout << endl;
    return 0;
}
