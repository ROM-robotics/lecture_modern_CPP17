#include <iostream>

template <typename T>
T abs(T a) {
    return (a >= 0) ? a : -a;
}

int main() {
    const double x = 5.5;
    const int y = -5;

    auto abs_x = abs<double>(x);
    auto abs_y = abs<int>(y);

    std::cout << abs_x << std::endl;
    std::cout << abs_y << std::endl;

    double abs_x2  = abs(x);    // type-deduction
    double abs_y2  = abs(y);    // type-deduction

    std::cout << abs_x2 << std::endl;
    std::cout << abs_y2 << std::endl;
    return 0;
}