#include <array>
#include <iostream>

int main()
{
	std::array<float, 3> data{10.0F, 100.0F, 1000.0F};

	for(const auto& eee:data)
	{
		std::cout << eee << std::endl;
	}

	std::cout << std::boolalpha;
	std::cout << "Array empty: " << data.empty() << std::endl;
	std::cout << "Array size: " << data.size() << std::endl;

	return 0;
}
