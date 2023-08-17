#include <iostream>
int main()
{
	int x=3, y=5;
	int &r = x;


	std::cout<<"&r is " << &r << std::endl;  // it will print address
	std::cout<<"r  is " << r << std::endl;   // it will print 3
	std::cout<<"x  is " << x << std::endl;   // 3
	std::cout<<"y  is " << y << std::endl;   // 5

	//&r = &y;                               // error: lvalue required as left operand of assignment
	r = y;

	std::cout<<"&r is " << &r << std::endl;  // it will print address
  	std::cout<<"r  is " << r << std::endl;   // it will print 5
	std::cout<<"x  is " << x << std::endl;   // 5
	std::cout<<"y  is " << y << std::endl;   // 5


	return 0;
}
