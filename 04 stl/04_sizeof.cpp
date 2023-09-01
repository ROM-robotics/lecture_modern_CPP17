#include <array>
#include <iostream>

int main()
{
	int data[17];
	// 68 / 4 = 17
	std::size_t data_size = sizeof(data) / sizeof(data[0]);

	printf("Size of array: %zu\n", data_size);

	// New Style
	std::array<int, 17> data_{};
	std::cout<<"Size of array: " << data_.size() << std::endl;
	return 0;
}
