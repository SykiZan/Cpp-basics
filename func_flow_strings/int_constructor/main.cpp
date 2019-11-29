#include <iostream>
#include <math.h>
int int_construct(int num , size_t times)
{
	int constructed = 0;
	
	for(size_t i = 0, j = 1; i < times; ++i, j*=10)
	{
		constructed += num*j;
	}
	return constructed;
}

using namespace std;

int main()
{
	int number = 0;
	cout<<"Enter a number"<<endl;
	cin>>number;
	system("cls");
	cout<<"Number is "<<number<<endl;
	
	int digits = to_string(number).length();
	
	cout<<"number has "<<digits<<" digits"<<endl;
	
	cout<<"Let's add '1' to each digit :) "<<endl;
	
	int new_number = number + int_construct(1,digits);
	
	cout<<new_number<<endl;
	
	
	//cout<<floor(log10(1090)+1)<<endl;
	return 0;
}
