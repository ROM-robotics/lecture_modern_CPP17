#include <iostream>
#include <boost/core/demangle.hpp>

template < typename T >
class Printable
{
    public:
        explicit Printable()
        {
            // Always print its type when created
            std::cout << boost::core::demangle(typeid(T).name()) << " created" << std::endl;
        }
};

class Example1 : public Printable<Example1>  {};
class Example2 : public Printable<Example2>  {};
class Example3 : public Printable<Example3>  {};
int main()
{
    const Example1 e1;
    const Example2 e2;
    const Example3 e3;
    
    return 0;
}