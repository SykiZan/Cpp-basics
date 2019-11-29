
#include <iostream>
#include <fstream>
#include <iomanip>


int main(){
	
	std::ifstream in_file("../r&j.txt");

	std::string word;
	
	std::cout<<"Enter a word to search"<<std::endl;
	std::string search;
	std::cin>>search;
	
	int count = 0;
	
	while(!in_file.eof())
	{
		in_file >> word;
		
		if(word.find(search) != std::string::npos)
		{   
			count++;
		}
		
	}
	 std::cout<<"The word "<<search<<" found "<<count<<" times"<<std::endl;
	return 0;
}

