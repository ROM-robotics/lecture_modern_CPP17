#include <iostream>
#include <string>

class SIMPLE1
{
	public:
		SIMPLE1(std::string name) : name_(name)
		{

		};

		std::string getName()
		{
			return name_;
		}

	private:
		std::string name_;
};

int main()
{
	SIMPLE1 s1{"Aung Aung"};
	//SIMPLE s1("Aung Aung");
	std::cout<< "s1 name is " << s1.getName() << std::endl;


	return 0;
}
