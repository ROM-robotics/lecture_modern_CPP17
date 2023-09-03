#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::string line, file_name;
	std::ifstream in("09_std_exception.cpp", std::ios_base::in);

	while( getline(in, line) )
	{
		std::cout << line << std::endl;

		// string has a find method.
		//std::string::size_type loc = line.find("You are under 18", 0);
		std::string::size_type loc = line.find("You are under 18");


		if(loc != std::string::npos)
			{
				file_name = line.substr(0, std::string::npos);
			}
	}
	std::cout << "Filename found: " << file_name << std::endl;

	return 0;
}
