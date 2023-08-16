#include <iostream>

extern void helloDynamic();

int main()
{
	std::cout << "Deep Blue " << std::endl;

	helloDynamic();
	return 0;
}
