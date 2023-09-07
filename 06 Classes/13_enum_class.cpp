#include <iostream>
#include <string>

using namespace std;

enum class Channel { STDOUT, STDERR };

void Print(Channel print_style, const string& str)
{
    switch (print_style)
    {
        case Channel::STDOUT:
            cout << str << endl;
            break;
        case Channel::STDERR:
            cerr << str << endl;
            break;
        default:
            cerr << "Skipping.." << endl;
    }
};

int main()
{
    Print (Channel::STDOUT, "Hello");
    Print (Channel::STDERR, "World");

    return 0;
}