#include <iostream>

int& multiplyBy10(int n)
{
	int ret_value = 0;
	ret_value = 10*n;

	return ret_value;
}

int main()
{
	int output = multiplyBy10(2);
	std::cout << "output is = " << output << std::endl;
	return 0;
}
