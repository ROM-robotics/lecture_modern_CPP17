#include <iostream>
#include <thread>
void function_1() {
	std::cout << "function_1 " << std::endl;
}
int main()
{
	std::thread t1(function_1); // t1 start running

	try{
		for(int i=0;i<100;i++)
			std::cout << "main: " << i << std::endl;
	} catch(...) {
		t1.join();
		throw;
	}


	return 0;
}
