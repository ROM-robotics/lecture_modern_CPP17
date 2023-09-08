#include <iostream>
#include <string>

// Base class
class GeometryShape 
{
  public:
    int height;
    int width;
    int radius;

    int Area() 
    { 
        std::cout << "Calculate Area of geometry shape" << std:: endl; return 0; 
    }
};

// Derived class
class Circle : public GeometryShape 
{
  public:
    int Area()
    {
        return radius * radius * 3.14;
    }
};

// Derived class
class Rectangle : public GeometryShape 
{
  public:
    int Area()
    {
        return height * width;
    }
};
int main() 
{
  Circle c1;
  c1.radius = 10;
  std::cout << "Circle Area: " << c1.Area() << std::endl;

  Rectangle r1;
  r1.height = 10;
  r1.width = 20;
  std::cout << "Rectangle Area: " << r1.Area() << std::endl;

  return 0;
}