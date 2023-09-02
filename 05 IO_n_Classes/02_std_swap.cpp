#include <iostream>

int main()
{
	int a=5; 
	int b=100;

	// before
	std::cout << a << " " << b << std::endl;

	std::swap(a,b);

	// after
	std::cout << a << " " << b << std::endl;

}
