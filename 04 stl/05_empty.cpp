#include <iostream>
#include <vector>

int main()
{
	int empty_arr[10];
	printf("Array empty: %d\n", empty_arr[0] == NULL);

	int full_arr[5] = {1,2,3,4,5};
	printf("Array empty: %d\n", full_arr[0] == NULL);

	std::vector<int> empty_vec{};
	std::cout<< "Array empty: " << empty_vec.empty() << std::endl;

	std::vector<int> full_vec{1,2,3,4,5};
	std::cout<< "Array empty: " << full_vec.empty()  << std::endl;

	return 0;
}
