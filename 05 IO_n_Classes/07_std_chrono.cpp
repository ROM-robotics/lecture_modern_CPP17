#include <chrono>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	auto start = std::chrono::steady_clock::now();
	for(int i=0; i<100000;i++){}
	auto end = std::chrono::steady_clock::now();

	std::chrono::duration<double> sec = end-start;
	cout << "Elapsed time: " << sec.count() << "s\n";

}

