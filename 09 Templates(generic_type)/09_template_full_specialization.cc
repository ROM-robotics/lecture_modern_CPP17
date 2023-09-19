#include <iostream>
template <typename T = void>
int my_sizeof() {
    return sizeof(T);
}

template <>
int my_sizeof() {
    return 1;
}

int main() {
    std::cout << my_sizeof<int>() << std::endl;
    std::cout << my_sizeof<double>() << std::endl;
    std::cout << my_sizeof() << std::endl;

    return 0;
}