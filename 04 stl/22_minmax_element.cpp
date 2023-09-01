#include <algorithm>
#include <vector>
//#include <numeric>
#include <iostream>

using namespace std;
int main()
{
	std::vector<int> v{3,1,4,1,0,5,9};
	auto result = std::min_element(v.begin(), v.end());
	auto min_location = std::distance(v.begin(), result); // 4 - 0 = 4
	cout << "min at: " << min_location << endl;

	using std::minmax_element;
	auto [min,max] = minmax_element(begin(v), end(v));
	cout << "min = " << *min << endl;
	cout << "max = " << *max << endl;
	return 0;
}
