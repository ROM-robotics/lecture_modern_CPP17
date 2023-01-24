#include <iostream>
#include <algorithm>

using namespace std;
inline bool div_by_3(int i) { return i%3==0; }
int main()
{
	std::vector<int> v{0,1,2,3,4,5,6,7,8,9};
	
	int n3 = std::count_if(v.begin(), v.end(), div_by_3);
	cout << "## divisible by 3: " << n3 << endl;
	return 0;
}
