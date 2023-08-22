#include <iostream>

int main()
{
	int a = 3;
	int b = 4;
	int sum=0;
	std::cout<< "a: "<<a<<std::endl;
	std::cout<< "b: "<<b<<std::endl;
	std::cout<< "sum:"<<(a++) + ++b << std::endl;

	std::cout<< "a: "<<a<<std::endl;
	std::cout<< "b: "<<b<<std::endl;


	return 0;
}
