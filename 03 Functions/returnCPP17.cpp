#include <iostream>
#include <tuple>

auto Foo() { return std::make_tuple("Super Variable", 5); }

int main()
{
	auto [name,value] = Foo();
	std::cout << name << " has value : " << value << std::endl;
}
