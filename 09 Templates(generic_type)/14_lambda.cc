#include <iostream>
#include <functional>
int main() {
    // EXAMPLE 1
    []() {
        std::cout << "Hello , Lambda" << std::endl;
    }();

    // EXAMPLE 2
    [](int value) {
        std::cout << "the value is " << value << std::endl;
    }(100);

    // EXAMPLE 3
    auto my_name = [](){std::cout<<"ghostman"<<std::endl;};

    std::cout<< "My name is ";
    my_name();

    // EXAMPLE 4
    std::function<void(int)> your_func = [](int value)
    {std::cout << "the value is " << value << std::endl;};

    std::cout << "The value is ";
    your_func(100);

    // EXAMPLE 5
    int a = 10;
    //auto a_plus_something = [](int value){return a +=value; }; // ERROR
    auto a_plus_something = [&a](int value){return a +=value; };
    std::cout << "a_plus_something " << a_plus_something(5) << std::endl;
    
    return 0;
}
