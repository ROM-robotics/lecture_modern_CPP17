#include <string>
#include <fstream>
using std::string;

using Mode = std::ios_base::openmode;

int main()
{
	std::ifstream f_in(string& 08_std_exception.cpp, Mode mode);

	std::ofstream f_out(string& "file.txt", Mode mode);

	std::fstream f_in_out(string* "hello.txt" Mode mode);

}
