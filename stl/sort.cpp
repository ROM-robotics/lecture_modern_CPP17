#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

	cout << "Before sorting: ";
	Print(s);

	std::sort(s.begin(), s.end());
	cout << "After sorting: ";
	Print(s);

	return 0;
}
