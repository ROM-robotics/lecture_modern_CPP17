#include <iostream>
#include "11_counted.hpp"

int Counted::count = 0; 
int main() {
    Counted c1;
    Counted c2;
    std::cout << "c1 count: " << Counted::count << std::endl;
    std::cout << "c2 count: " << Counted::count << std::endl;

    Counted c3 = c1;
    std::cout << "c3 count: " << Counted::count << std::endl;
    return 0;
}