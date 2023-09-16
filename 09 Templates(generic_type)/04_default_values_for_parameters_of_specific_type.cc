#include <iostream>

template <class L1, class L2, int add = 10>
class Area
{
    L1 length;
    L2 width;
    public:
        Area(L1 l, L2 w) {
            length = l+add; width = w+add;
        }
        float Display() {
            std::cout << "\n\tLength = " << length << " inches";
            std::cout << "\n\tWidth = " << width << "feet\n\t";
            return (length*width/12.0);
        }
};

int main()
{
    float a = 12345;
    float b = 67.89;

    Area<float, float> m1{a,b}; // or m1(a,b);
    std::cout << m1.Display() << "sq ft\n";

    Area<float, float, 100> m2(a,b);
    std::cout << m2.Display() << "sq ft\n";

    return 0;
}