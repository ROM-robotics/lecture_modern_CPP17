#include <iostream>
#include <cstring>
#include <string>

int main()
{
	char letters[8] = {'g','h','o','s','t','m','a','n'};
	memset( letters, 0, sizeof(letters) );
	std::cout << letters << std::endl;

	std::string letters_{"ghostman"};
	letters_.clear();
	std::cout << letters_ << std::endl;

	return 0;
}
