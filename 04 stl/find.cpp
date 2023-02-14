#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int n = 3;
	std::vector<int> v{0,1,2,3,4};

	auto result = std::find(v.begin(), v.end(), n);

	if(result != std::end(v))
	{
		cout << "v contains: " << n << endl;
	} else {
		cout << "v doesn't contain: " << n << endl;
	}

	return 0;
}
