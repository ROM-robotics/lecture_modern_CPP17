#include "tools.hpp"

int main()
{
    MakeItRain();
    MakeItSunny();

    return 0;
}

// g++ main.cpp ==> linking err
//
//
// How to make lib
// g++ -std=c++17 -c tools.cpp -o tools.o           => tools.o
// ar rcs libtools.a tools.o                        => libtools.a
// g++ -std=c++17 main.cpp -L . -ltools -o main     => -L . -> say Layer to search lib in this path, -ltools -> your lib