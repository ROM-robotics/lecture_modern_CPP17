//#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
//#include <functional>
#include <numeric>

using namespace std;
int main()
{
	std::vector<int> v{1,2,3,4,5,6,7,8,9,10};

	int sum = std::accumulate(v.begin(), v.end(), 0);

	int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies());

	cout << "Sum   : " << sum << endl;
	cout << "Product : " << product << endl;
	return 0;
}
