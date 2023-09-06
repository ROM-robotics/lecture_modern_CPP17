#include <iostream>
#include <string>

class SIMPLE1
{
	public:
		SIMPLE1(){};
		void setName(std::string name)
		{
			name_ = name;
		}
		std::string getName()
		{
			return name_;
		}

	private:
		std::string name_;
};

int main()
{
	SIMPLE1 s1;
	//s1.setName(std::string("Mg Mg"));
	s1.setName(std::string{"Aung Aung"});
	std::cout<< "s1 name is " << s1.getName() << std::endl;


	return 0;
}
