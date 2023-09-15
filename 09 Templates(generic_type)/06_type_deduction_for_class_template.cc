#include <iostream>
#include <vector>

template <typename T>

struct Foo
{
    public:
        Foo(T x) : x_(x) {}
        T x_;
};

int main()
{
    auto obj = Foo<int>(5);
    std::cout << obj.x_ << std::endl;

    auto x_obj = Foo<int>(10).x_;
    std::cout << x_obj << std::endl;

    auto  x_obj2 = Foo(10).x_;              // deduction
    std::cout << x_obj2 << std::endl;

    auto vec = std::vector<int>{10, 50};
    auto same_vec = std::vector{10, 50};    // deduction

    return 0;
}