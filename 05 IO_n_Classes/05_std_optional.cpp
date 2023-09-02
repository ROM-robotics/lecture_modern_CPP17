#include <iostream>
#include <optional>

std::optional<std::string> stringFactory(bool create)
{
	if(create) { return "Modern C++ is easy!"; }

	return {};
}

int main()
{
	std::cout << stringFactory(true).value() << std::endl;
	std::cout << stringFactory(false).value_or(":(") << '\n';


}
