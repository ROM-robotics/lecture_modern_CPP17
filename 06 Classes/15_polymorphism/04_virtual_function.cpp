#include <iostream>
#include <string>

// C++11 က စပြီး override လုပ်ရာမှာ အမှားနဲအောင် override keywords ကို အသုံးပြုလို့ရလာပါတယ်။
class Base {
   public:
    virtual void print() {
        std::cout << "Hello from Base Class" << std::endl;
    }
};

class Derived : public Base {
   public:
    void print() override {
        std::cout << "Hello from Derived Class" << std::endl;
    }
};

int main() {
    Derived derived1;
    Base* base1 = &derived1;
    
    base1->print();

    return 0;
}

// ဒါဆို အဆင်ပြေပါပြီ။