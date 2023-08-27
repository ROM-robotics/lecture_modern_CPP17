#include <iostream>

namespace fun {
	int getMeaningOfLife(void) { return 41; }
}
namespace boring {
	int getMeaningOfLife(void) { return 22; }
}

int main()
{
	std::cout << boring::getMeaningOfLife() << std::endl;
	std::cout << fun::getMeaningOfLife() << std::endl;


	return 0;
}

