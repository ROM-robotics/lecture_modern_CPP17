#include <iostream>
int main() {
	const float var = 84.78;

	const bool cmp_result = ( 84.78 == var );
	std::cout << "84.78 equal to " << var << " ???\n" << std::boolalpha << cmp_result << "\n";

	return 0;
}
