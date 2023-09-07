#include <iostream>
#include <string>
using std::cout;
using std::endl;

class MyClass
{
    public:
        MyClass() { cout << "default constructor" << endl; }

        // copy constructor
        MyClass(const MyClass& other) { cout << "copy constructor" << endl; }

        // move constructor
        MyClass(MyClass&& other) { cout << "move constructor" << endl; }

        // copy assignment operator { should have return type of MyClass& }
        MyClass& operator = (const MyClass& other) { cout << "copy assignment operator" << endl; return *this; } 

        // move assignment operator { should have return type of MyClass& }
        MyClass& operator = (MyClass&& other) { cout << "move assignment operator" << endl; return *this; }

};

int main()
{
    MyClass a;                                  // Calls Default Constructor
    MyClass b = a;                              // Calls Copy Constructor
    a = b;                                      // Calls Copy Assignment Operator

    MyClass c = std::move(b);                    // Calls Move Constructor
    c = std::move(a);                            // Calls Move Assignment Operator
    
    return 0;
}