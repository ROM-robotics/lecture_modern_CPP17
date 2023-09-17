#include <iostream>

void Counter(){
	static int count = 0;
	std::cout << "counter state = " << ++count << std::endl;
}

int main()
{
	for(size_t i=0;i<5; i++)
	{
		Counter();
	}

	return 0;
}
