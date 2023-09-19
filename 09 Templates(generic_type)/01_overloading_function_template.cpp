#include <iostream>

int const& max ( int const& a, int const& b)
{
    std::cout << "max(int, int)" << std::endl;
    return (a > b) ? a : b;
}

template <typename T>
T const& max ( T const& a, T const& b)
{
    std::cout << "max(T, T)" << std::endl;
    return (a > b) ? a : b;
}

template <typename T>
T const& max ( T const& a, T const& b, T const& c)
{
    std::cout << "max(T, T, T)" << std::endl;
    return max( max(a, b), c);
}

int main()
{
    ::max(10.0, 20.0);
    ::max('a', 'b');
    ::max(10, 20);
    ::max<>(10, 20);
    ::max<double>(10, 20);
    ::max(10, 20, 30);

    return 0;
}
