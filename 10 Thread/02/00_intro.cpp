#include <iostream>
#include <thread>
void function_1() {
	std::cout << "function_1 " << std::endl;
}
int main()
{
	std::thread t1(function_1); // t1 start running

	//t1.join(); // main thread wait for t1 to finish
	t1.detach();

	if(t1.joinable())
		t1.join();

	return 0;
}
