#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

//Function prototypes
void show_menu(vector<double>);
void add_num(vector<double>);
void print(vector<double>);
void mean(vector<double>);
void largest(vector<double>);
void smallest(vector<double>);
void quit();
void selection(vector<double>);

 

int main(){
   vector<double> list{};

 show_menu	(list);
 
   return 0;
 
}

//Function definition
//Menu function
void show_menu	(vector<double> list){
  	
  cout<<"P - print numbers"<<endl;
  cout<<"A - add a number"<<endl;
  cout<<"M - display mean of the numbers"<<endl;
  cout<<"S - display the smallest of numbers"<<endl;
  cout<<"L - display the largest of numbers"<<endl;
  cout<<"Q - Quit"<<endl;
  selection (list);
  
}

//Print function
void print(vector<double> list){
	 if (list.size()==0)
         cout<<"[] - the list is empty"<<"\n"<<endl;
     else {
         cout<<"[ ";
        for (auto val:list){
          cout<<val<<" ";}
           cout<<"]"<<endl;}
   show_menu(list);
}

// Add function
void add_num(vector<double> list){
	cout<<"Enter a number to be added "<<endl;
   int elem{};
   cin>>elem;
   if(cin.fail())
   {
	   cin.clear();
	   cin.ignore();
	   cout<<"Wrong input , only integers allowed"<<endl;
	   add_num(list);
   }
   else
   {
	   list.push_back (elem);
	   cout<<elem<<" added"<<endl;
	   cout<<"\n---------------"<<endl;
	   show_menu(list);
   }
}

//Mean function
void mean(vector<double> list){
	double sum{};
	if (list.size()==0)
		cout<<"The list is empty"<<endl;
   for (auto val:list){
    sum = sum+val;
   }
   double mean{};
   mean = sum/(list.size());
   cout<<"\n"<<"The mean is  ";
   cout<<mean<<endl;
   
   show_menu(list);
}

//Largest function
  void largest(vector<double> list){
	if (list.size()==0){
		cout<<"The list is empty"<<endl;
		cout<<"--------------"<<endl;
	}
	else {	
	double largest{};
   largest=list.at(0);
   for (auto val:list){
    if(largest<val ){
     largest=val;
    }
    
   } cout<<"The largest number in the list is "<<largest<<endl;
	}
   show_menu(list);
}

//Smallest function
void smallest(vector<double> list){
	if (list.size()==0){
		cout<<"The list is empty"<<endl;
		cout<<"--------------"<<endl;
	}
    else {
	 double smallest{};
     smallest=list.at(0);
      for (auto val:list){
        if(val<smallest ){
          smallest=val;
	 
    }
	  } cout<<"The smallest number in the list is "<<smallest<<endl;
   } 
	show_menu(list);
}

//Goodbye function
void quit(){
	cout<<"Goodbye"<<endl;
}

//Selection function
void selection(vector<double> list){
	cout<<"----------------------"<<endl;
	cout<<"| Make your selection |"<<endl;
	cout<<"----------------------"<<endl;
  char selection {};
  cin>>selection;
  selection = tolower(selection);
  
  cout<<"\n---------------"<<endl;
   if     (selection == 'q')
	    quit();
  else if (selection == 'a')
       add_num(list);
  else if (selection == 'm')
	mean(list);	 
  else if (selection == 's')
	smallest  (list);	 
  else if (selection == 'l')
	largest(list);	 
  else if (selection == 'p')
	print(list);
  else {
     cout<<"unknown option, try again"<<endl;
	 cout<<"------------------"<<endl;
      show_menu(list);	
  }
  } 		
