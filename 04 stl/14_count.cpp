#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	std::vector<int> v{0,1,2,3,4,5,6,7,3,8,9};
	
	const int n1 = 3; const int n2 = 5;

	int num_items1 = std::count(v.begin(),v.end(),n1);
	int num_items2 = std::count(v.begin(),v.end(),n2);

	cout << n1 << " count: " << num_items1 << endl;
	cout << n2 << " count: " << num_items2 << endl;

	return 0;
}
