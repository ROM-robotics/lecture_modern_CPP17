#include <iostream>
using namespace std;

int main()
{
	int size = 2;
	// point from stack
	int* ptr = nullptr;
	{
		// pointer point to heap address
		ptr = new int[size];
		ptr[0] = 42;
		ptr[1] = 13;

	} // End of scopes doesn't free heap memory

	std::cout << "After scope{}  " << std::endl;
	// Correct access, variables still in memory
	for( int i=0;i<size;++i ) {
		cout << ptr[i] << endl;
	}
	delete[] ptr; // Free memory

	std::cout << "After delete " << std::endl;
	for( int i=0;i<size;i++ ) {
		cout << ptr[i] << endl;
	}
	return 0;
}
