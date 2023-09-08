#include <iostream>
#include <string>

// Base class ထဲမှာ သေချာပေါက် override လုပ်ပြီး ပြန်ရေးစေဖို့အတွက် ဆိုရင် virtual functions တွေကို သုံးရပါတယ်။
class Base {
   public:
    virtual void print() {
        std::cout << "Hello from Base Class" << std::endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        std::cout << "Hello from Derived Class" << std::endl;
    }
};
int main() {
    Derived derived1;
    Base* base1 = &derived1;
    
    base1->print();

    return 0;
}
