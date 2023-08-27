#include <iostream>
#include <vector>

namespace my_vector {
	template <typename T>
	class vector {};
}

int main()
{
	std::vector<int> v1;
	my_vector::vector<int> v2;

	{
		using std::vector;
		vector<int> v3;
		v1 = v3;
	}
	{
		using my_vector::vector;
		vector<int> v4;
		v2 = v4;

		using vec_vec = my_vector::vector<int>;
		vec_vec v5;
		v2 = v5;
	}

	return 0;
}

