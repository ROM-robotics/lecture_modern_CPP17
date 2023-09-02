#include <cassert>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int myInt = 1;
	cout << "assert() test" << endl;
	assert(myInt > 0 );
	cout << "assert() pass" << endl;



	return 0;
}
