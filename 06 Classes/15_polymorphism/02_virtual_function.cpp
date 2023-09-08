#include <iostream>
#include <string>

class Base {
   public:
    void print() {
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

// ဒီဥပမာမှာဆိုရင် Base type pointer တစ်ခု ဖန်တီးပြီးတော့ သူ့ထဲကို derived object ရဲ့ address ကို point လုပ်လိုက်ပါတယ်။
// ဒါပေမဲ့ print() ကို ခေါ်တဲ့ အခါကျတော့ Base class ရဲ့ print ပဲ ရောက်လာတယ်။ 
// override မဖြစ်သွားပါဘူး။  virtual keyword လေးထည့်ပြီး စမ်းကြည့်ပါမယ်။
