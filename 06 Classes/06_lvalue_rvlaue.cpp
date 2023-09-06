#include <iostream>

int main()
{
	int x = 3;
	int y;
	std::cout << "x: " << x << std::endl << "y: " << y << std::endl;

	int&& c = std::move(x); // doesn't move anything, it give an rvalue referenct to x

	std::cout << "x: " << x << std::endl << "c: " << c << std::endl;
	return 0;
}
