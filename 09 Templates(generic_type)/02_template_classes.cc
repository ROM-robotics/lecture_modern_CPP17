#include <iostream>

template <class T>
class MyClass
{
    public:
        MyClass(T x) : x_(x) {}
    private:
        T x_;
};

int main()
{
    MyClass<int> my_int(10);
    MyClass<double> my_double(3.14);

    return 0;
}