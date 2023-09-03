#include <functional>
#include <iostream>
#include <memory>
#include <random>
 
void f(int n1, int n2, int n3, const int& n4, int n5)
{
    std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << '\n';
}
 
int g(int n1)
{
    return n1;
}
 
struct Foo
{
    void print_sum(int n1, int n2)
    {
        std::cout << n1 + n2 << '\n';
    }
 
    int data = 10;
};
 
int main()
{
    using namespace std::placeholders;  // for _1, _2, _3...
 
    std::cout << std::endl << "1) argument reordering and pass-by-reference: ";
    int n = 7;
    auto f1 = std::bind(f, _2, 42, _1, std::cref(n), n);
    n = 10;

    f1(1, 2, 1001); // 1 is bound by _1, 2 is bound by _2, 1001 is unused
                    // makes a call to f(2, 42, 1, n, 7)
 
    //---------------------------------------------------------------
	std::cout << std::endl << "2) bind to a pointer to member function: ";
    Foo foo;
    auto f2 = std::bind(&Foo::print_sum, &foo, 95, _1);
    f2(5);

	std::cout << std::endl << "၃) အ များ ကြီး ရှိ သေး ပေ မယ့် ဒီ လော က် နဲ့ ပဲ ရပ် လို က် ပါ တယ် ။" << std::endl << std::endl;
	return 0;
}