#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	cout << "Got " << argc << " params\n";

	for(int i=0; i<argc; ++i)
	{
		cout << argv[i] << " ";
	}
	cout << endl;

	return 0;
}
