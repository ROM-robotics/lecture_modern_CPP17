#include <iostream>
#include <vector>

class Human
{
	public:
		Human(int k) : kindness_{k} {};
		int kindness(void) const { return kindness_; }
	private:
		int kindness_ = 100;
};

std::ostream& operator << ( std::ostream& os, const Human& human ) 
{
	os << "This human is this kind: " << human.kindness();
	return os;
}

int main()
{
	std::vector<Human> humans = { Human{0}, Human{10} };

	for(auto&& human : humans) 
	{
		std::cout << human << std::endl;
	}

	return 0;
}
