#include <iostream>
#include <fstream>
#include <iomanip>


int main()
{
	std::ifstream in_file;
	
	in_file.open("../response.txt");
	  
	std::string correct;
    std::getline(in_file,correct);

	in_file.close();
		in_file.open("../response.txt");
    
	int lines_count {1};
	
	std::string line;
	
	while(getline(in_file,line))
		lines_count++;
		
		
		in_file.close();
		in_file.open("../response.txt");
		
	
    std::cout<<std::setw(15)<<std::left<<"Student"<<"Key"<<std::setw(15)<<std::right<<"Score"<<std::endl;
	std::cout<<"--------------------------------------"<<std::endl;

	std::string value;
	
	int total {0};
	int num_student {0};
	for(size_t i = 1 ; i <lines_count; ++i)
	{
		int ptr {0};
		
		std::getline(in_file,value);
	     if(i == 1)
			 continue;
		if( i % 2 == 0)
			std::cout<<std::setw(15)<<std::left<<value;
		else
		{    
			num_student ++;
           	std::cout<<value;
			
			for(int j = 0; j <= 4; ++j)
			{
				
				if( correct.at(j) == value.at(j))
					   ptr++;
			}
			total += ptr;
			std::cout<<std::setw(10)<<std::right<<ptr<<std::endl;
		}
	}

   std::cout<<"--------------------------------------"<<std::endl;
   
  double avg = static_cast<double>(total)/num_student;
  
  std::cout<<"Average score"<<std::setw(17)<<std::right<<avg<<std::endl;
	return 0;
}
