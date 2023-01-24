#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::vector<int> numbers = { 1, 2, 3};
	std::vector<std::string> names = {"Nacho", "Cyrill"};

	names.emplace_back("Roboto");

	std::cout << "First Name : " << names.front() << std::endl;
	std::cout << "Last Number : " << numbers.back() << std::endl;

	return 0;
}
