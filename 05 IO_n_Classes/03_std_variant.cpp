#include <variant>
#include <iostream>

int main()
{
	std::variant<int, float> v1;
	v1 = 15;  // v contains int
	std::cout << std::get<int>(v1) << std::endl;

	std::variant<int, float> v2{3.1415F};
	std::cout << std::get<1>(v2) << std::endl;

	v2 = std::get<int>(v1); // assigns v1 to v2
	v2 = std::get<0>(v1);   // same as previous line
	v2 = v1;		// same as previous line

	std::cout << std::get<int>(v2) << std::endl;

}

