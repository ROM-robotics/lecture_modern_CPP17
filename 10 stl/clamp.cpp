#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;
int main()
{
	const double kMax = 1.0F;
	const double kMin = 0.0F;

	cout << std::clamp(0.5, kMin, kMax) << endl;
	cout << std::clamp(1.1, kMin, kMax) << endl;
	cout << std::clamp(0.1, kMin, kMax) << endl;
	cout << std::clamp(-2.1,kMin, kMax) << endl;

	return 0;
}
