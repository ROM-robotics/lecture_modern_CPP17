#include <iostream>
#include <thread>
using namespace std;

void fun1() { 
	std::cout<< "Heavy Rock" << std::endl;
	for(int i=0;i<1000000;i++)
	{ std::cout<< i ; }
}

int main() {
	std::thread t1(fun1);
	//t1.join(); // main thread waits for t1 to finish
	//t1.detach(); // t1 will freely on it's own .. daemon process

	// do something

	if(t1.joinable())
		t1.join();
	return 0;
}
