#include <iostream>

struct SomeOtherClass {};
class MyClass {
public:
    MyClass() { 
        std::cout << "Constructor" << std::endl; 
        data_ = new SomeOtherClass;
    }
    ~MyClass() { 
        std::cout << "Destructor" << std::endl; 
        delete data_;
        data_ = nullptr;
    }
private:
    SomeOtherClass* data_;
};

int main()
{
    MyClass a;
    MyClass b(a);

    int tmp;
    std::cin >> tmp;

    return 0;
}
