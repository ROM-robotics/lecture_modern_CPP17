#include <iostream>
#include <stdexcept>

int main()
{
	int age = 12;

	try 
	{
		if( age > 18 && age < 60 )
		{
			std::cout << "Access granted - You are old enough " << std::endl;
		}
		else if ( age < 18 )
		{
			throw std::runtime_error("You are under 18");
		}
		else
		{
			throw std::runtime_error("You are too old");
		}
	}
	catch(const std::runtime_error &ex)
	{
		std::cout << ex.what() << std::endl;
	}

}
