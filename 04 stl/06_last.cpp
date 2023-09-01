#include <iostream>
#include <array>

int main()
{
	float f_arr[3] = {1.5, 2.4, 3.0};
	printf("Last element : %f\n", f_arr[3]);

	std::array<float, 3> f_arr_{1.5, 2.4, 3.0};
	std::cout<< "Last element: " << f_arr_.back() << std::endl;
	return 0;
}
