#include <iostream>
using namespace std;

int main()
{
	int* i_ptr; // BAD! Never leave uninitialized!
	cout << "ptr address: " << i_ptr << endl;
	cout << "value of ptr: " << *i_ptr << endl;

	i_ptr = nullptr;
	cout << endl << "New Ptr address: " << i_ptr << endl;
	cout << "Ptr size: " << sizeof(i_ptr) << "bytes" << endl;
	//cout << "Ptr value: " << *i_ptr << endl; // SEGFAULT
	return 0;
}
