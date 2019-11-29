#include <iostream>
#include <fstream>


int main()
{
	std::ofstream out_file("../copied.txt");
	std::ifstream in_file("../r&j.txt");
	
	std::string line;
	
	int i = 1;
	while(std::getline(in_file,line))
	{
		
		if(line.empty())
			out_file<<line<<std::endl;
		else
			{	
		out_file<<i<<"    "<<line<<std::endl;
		   i++;
			}
	}
		
		
	in_file.close();
	out_file.close();
	return 0;
}
