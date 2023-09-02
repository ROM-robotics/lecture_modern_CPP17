#include <string>
#include <iostream>
#include <tuple>
using std::string;

int main()
{
	std::tuple<double, char, string> student1;
	
	using Student = std::tuple<double, char, string>;

	Student student2{1.4, 'A', "Jose"};

	std::cout << std::get<double>(student2) << " " << std::get<char>(student2) << " " << std::get<2>(student2) << std::endl;

	// C++17 structured binding
	auto [gpa, grade, name] = std::make_tuple(4.4, 'B', " ");

	
}
