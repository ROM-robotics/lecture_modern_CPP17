#include <iostream>
#include <algorithm>

int main()
{
	std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

	std::cout << "Before sorting: " << std::endl;
	for(auto const & i : s)
	{
		std::cout << i << ", " ;
	} std::cout << std::endl;

	std::sort( s.begin(), s.end() );
	std::cout << "After sorting: " << std::endl;
	for(auto i : s)
	{
		std::cout<< i << ", ";
	} std::cout << std::endl;

	return 0;
}
