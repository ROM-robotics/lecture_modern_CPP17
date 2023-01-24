#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
inline bool even(int i) { return i%2 ==0; }
int main()
{
	std::vector<int> v(10,2);
	std::partial_sum(v.cbegin(), v.cend(), v.begin());


	bool all_even = all_of(v.cbegin(),v.cend(),even);
	if(all_even) { cout << "All numbers are even." << endl;}

	return 0;
}
