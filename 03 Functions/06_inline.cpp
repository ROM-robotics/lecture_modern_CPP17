#include <iostream>
int fac(int n)
{
	if(n<2) { return 2; }
	return n * fac(n-1);
}

int main()
{
	int fac0 = fac(0);
	int fac1 = fac(1);
	int fac2 = fac(2);
	int fac3 = fac(3);
	int fac4 = fac(4);
	int fac5 = fac(5);
	int fac6 = fac(6);

	std::cout << "totals = " << fac0+fac1+fac2+fac3+fac4+fac5+fac6 << std::endl;
}
// open with compiler explorer
// check inline int fac(){..} and compile with -O3 flag
// https://godbolt.org/
