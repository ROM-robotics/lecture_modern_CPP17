#include <iostream>
#include <vector>
class AbstractShape
{
    public:
        virtual void Print() const = 0;
};

class Square : public AbstractShape
{
    public:
        void Print() const override { std::cout << "Square" << std::endl; }
};

class Triangle : public AbstractShape
{
    public:
        void Print() const override { std::cout << "Triangle" << std::endl; }
};

int main()
{
    std::vector<AbstractShape*> shapes;
    Square square;
    Triangle triangle;

    shapes.push_back(&square);
    shapes.push_back(&triangle);

    for(const auto& shape : shapes)
    {
        shape->Print();
    }

    return 0;
}
