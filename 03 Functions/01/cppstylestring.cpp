#include <iostream>
#include <string>

int main(){
	const std::string source{"Copy this!"};
	std::string dest = source;

	std::cout << source << std::endl;
	std::cout << dest << std::endl;

	return 0;
}
