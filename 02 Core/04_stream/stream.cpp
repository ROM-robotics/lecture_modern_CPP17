#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
	std::stringstream filename{"00205.txt"};

	int num =4;
	std::string ext;

	filename >> num >> ext;


	std::cout << "Number is: " << num << std::endl;
	std::cout << "Extension is: " << ext << std::endl;

	return 0;
}

