#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	std::vector<int> nums{3,4,2,8,15,267};

	auto print = [] (const int& n) {cout << " " << n; };

	cout << "Numbers: ";
	std::for_each(nums.cbegin(), nums.cend(), print);
	cout << endl;

	return 0;
}
