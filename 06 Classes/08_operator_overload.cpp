#include <algorithm>
#include <vector>
#include <iostream>

class Human
{
	public:
		Human(int kindness) : kindness_{kindness}{};
		bool operator < (const Human& other_human) const 
		{
			return kindness_ < other_human.kindness_;
		}
	
	private:
		int kindness_ = 100;
};

int main()
{
	std::vector<Human> humans = { Human{98}, Human{69} };
	std::sort(humans.begin(), humans.end());

	if( humans.begin() < humans.end() ) { std::cout << "Sorting OK" << std::endl; }
	return 0;
}
