#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
auto UpperCase_(char c) { return std::toupper(c); }
int main()
{
	const std::string s("hello");
	std::string S{s};

	std::transform(s.begin(), s.end(), S.begin(), UpperCase_);

	cout << s << endl;
	cout << S <<endl;
	return 0;
}
