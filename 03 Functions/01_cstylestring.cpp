#include <cstring>
#include <iostream>

int main(){
	const char source[] = "Copy this!";
	char dest[5];
	std::cout << source << std::endl;

	std::strcpy(dest, source);   
	std::cout << dest << std::endl;

	std::cout << source << std::endl;
	return 0;
}
