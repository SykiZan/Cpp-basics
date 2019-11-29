#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> vec;
	int elem;
	cout<<"Enter numbers for vector separated by space :"<<endl;
	
	do
	{
		cin>>elem;
		vec.push_back(elem);
	} while (getchar() != '\n');
	
	cout<<endl;
	
	cout<<"Vector is :"<<endl;
	for(auto e: vec )
		cout<<e<<" ";
	cout<<endl<<endl;	
	
	cout<<"vector size is "<<vec.size()<<endl<<endl;
	
	int min = vec.at(0);
	
	int temp{};
	             // used for swapping 
	int pos{};
	
	for(size_t i{0}; i < vec.size(); ++i)
	{
		 min = vec.at(i);
	     for(size_t k{0}; k < vec.size() ; ++k) //loop to find minimal element
		 {
			  if(k < i)
				continue;
				
		      if(vec.at(k) < min)
                min = vec.at(k);
				
		 } 
		 
		 for(size_t p{0}; p < vec.size(); ++p)  //loop to find position of minimal element
		 {
			 if(vec.at(p) == min)
				 pos = p;
		 } 
		    temp = vec.at(i);     //  swaping elements(current and minimal)
		    vec.at(i) = min;
			vec.at(pos) = temp;
	}
	
	cout<<"Sorted vector is "<<endl;
	
	for(auto e: vec )
		cout<<e<<" ";
	cout<<endl<<endl;
	

	return 0;
}