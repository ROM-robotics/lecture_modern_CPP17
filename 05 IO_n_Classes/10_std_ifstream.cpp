#include <string>
#include <iostream>
#include <fstream>
using std::string;

using Mode = std::ios_base::openmode;

int main()
{
	int i;
	double a,b;
	string s;

	std::ifstream in("data.txt", std::ios_base::in);

	while( in >> i >> a >> s >> b ) 
	{
		std::cout << i << ", " << a << ", " << s << ", " << b << std::endl;
	}

	return 0;
}
