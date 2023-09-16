#include <cstdio>

template <typename T>
void foo(T x)
{
    puts(__PRETTY_FUNCTION__);
}

int main()
{
    foo(4);         // void foo(T) [ T = int ]
    foo(4.2);       // void foo(T) [ T = double ]
    foo("hello");   // void foo(T) [ T = const char* ]
    foo<char>('a');
    foo('b');

    return 0;
}