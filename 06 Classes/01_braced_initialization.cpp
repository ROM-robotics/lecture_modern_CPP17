#include <iostream>
#include <string>

struct NamedInt 
{
	int num;
	std::string name;
};

class Named_Int
{
	public:
		int num;
		std::string name;

};

int main()
{
	NamedInt var1{ 1,std::string{"Hello"} };
	std::cout << var1.num << " " << var1.name << std::endl;

	Named_Int var2{ 2, std::string{"World"} };
	std::cout << var2.num << " " << var2.name << std::endl;

	return 0;
}
