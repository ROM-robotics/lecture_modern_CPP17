#include <iostream>
#include <string>

class Base {
   public:
    virtual void print() {
        std::cout << "Hello from Base Class" << std::endl;
    }
};

class Derived : public Base {
   public:
    void print() override;

    // ဒီလိုလည်းရေးလို့ရ
    // virtual void print() override;
};

void Derived::print()
{
    std::cout << "Hello from Derived Class" << std::endl;
}
int main() {
    Derived derived1;
    Base* base1 = &derived1;
    
    base1->print();

    return 0;
}

