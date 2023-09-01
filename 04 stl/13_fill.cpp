#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	std::vector<int> v{0,1,2,3,4,5,6,7,8,9};
	
	std::fill(v.begin(), v.end(), 100);

	for(auto const & i : v)
	{
		std::cout<< i << ", ";
	} std::cout << std::endl;

	return 0;
}
