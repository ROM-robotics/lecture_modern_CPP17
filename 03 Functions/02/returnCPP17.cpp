#include <iostream>
#include <tuple>

int f3() { return 1; }
//void f4() { return 1; }

auto Foo() { return std::make_tuple("Super Variable", 5); }

int main()
{
	auto [name,value] = Foo();
	std::cout << name << " has value : " << value << std::endl;
	
	f3();

	return 0;
}
