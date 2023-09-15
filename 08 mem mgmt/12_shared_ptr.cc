#include <iostream>
#include <memory>

class MyClass
{
    public:
        MyClass() { std::cout << "I am alive!\n" << std::endl; }
        ~MyClass() { std::cout << "I am dead .." << std::endl; }
};

int main()
{
    auto a_ptr = std::make_shared<MyClass>();

    std::cout << a_ptr.use_count() << std::endl;

    {
        auto b_ptr = a_ptr;
        std::cout << a_ptr.use_count() << std::endl;
    }

    std::cout << "Back to main scope\n";
    std::cout << a_ptr.use_count() << std::endl;
    return 0;
}