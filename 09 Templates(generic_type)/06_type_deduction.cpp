#include <iostream>

template <typename T, typename U>
void foo(T x, U y) {
    //
}
template <typename T>
void bar(T x, T y) {
    //
}

int main()
{
    foo(1, 2);        // void f(T, U) [ T = int, U = int ]
    foo(1, 2u);       // void f(T, U) [ T = int, U = unsigned int ]
    
    bar(1, 2);        // void g(T, T) [ T = int ]
    bar(1, 2u);       // error: no matching function for call to g  --> g(int , unsigned int)
}