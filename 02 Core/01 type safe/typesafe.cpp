#include <iostream>
int main(){
	enum class RGB { RED, GREEN, BLUE };
	RGB color = RGB::GREEN;

	switch(color){
		case RGB::RED: std::cout << "red\n"; break;
		case RGB::GREEN: std::cout << "green\n"; break;
		case RGB::BLUE: std::cout << "blue\n"; break;
	}
	return 0;
}
