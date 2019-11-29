#include <iostream>
#include <vector>



using namespace std;

int main()
{
	
	int num_elem; // number of elements in the list
	cout<<"How many elemets are in your list? ";
	cin>>num_elem;
	
	cout<<"Enter max repetitions of an element in the list"<<endl;
	int max;
	cin>>max;
	
/*Here we are creating 2 vectors. "list" will be our data and "filtered" will be our result.
 * 
Need to fill up a 'data' vector with our numbers*/	

	cout<<"Enter numbers for a list separated by space : "<<endl;
	
	vector<int> list;  // create a list to be filled
	vector<int> filtered ; // our final list with only particular numbers of repetitions of an element
	
	// loop to put elements into initial list
	for(int i = 0; i<num_elem; i++){
		int elem;
		cin>>elem;
		list.push_back(elem);
	}
	
//Displaying initial (data) vector	
    cout<<"Your list is"<<endl;
	cout<<"[ ";
	for (auto e:list){
		cout<<e<<" ";
	}
	cout<<"]";
	
	cout<<endl;
	
	
	
	// Logic for filtering (   core part of the programm :)    )
	int counter_max {0}; // It's a counter for repetitions of the same element in final vector ('filtered')
	
	for(int i = 0; i<list.size(); i++)
	{ 
		 counter_max = 0;
		 for(int j = 0; j<filtered.size(); ++j)
		{
			
			if(filtered.at(j) == list.at(i) )
			{
				counter_max++;
			}
		}
		
		if (counter_max < max )
		 filtered.push_back(list.at(i));
		else 
		   continue ;
	}
	
	// Output result
		
	cout<<"---------------------------"<<endl;
	cout<<"List with "<<"maximal "<<max<<" repetitions of the same element"<<endl;
	cout<<"[ ";
	for (auto e:filtered)
		cout<<e<<" ";
	cout<<"]"<<endl;
	return 0;
}
