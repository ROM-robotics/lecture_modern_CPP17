#include <iostream>
#include <vector>
#include <array>

constexpr int factorial(int n) {
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

int main() {
    std::cout << "factorial(10) = " << factorial(10) << std::endl;

    std::array<int, 10> arr;
    constexpr size_t size_ = arr.size();

    std::vector<int> vec;
    constexpr size_t size = vec.size();
    return factorial(10);
}
