#include <iostream>
#include <string>

// Base class
class GeometryShape 
{
  public:
    int height;
    int width;

    int getHeight() { return height; }
};

// Derived class
class Polygon : public GeometryShape 
{
  public:
    std::string polygon_type;
};

int main() 
{
  Polygon polygon;
  polygon.height = 10;
  polygon.width = 20;
  polygon.polygon_type = "square";

  std::cout << polygon.polygon_type << std::endl;
  std::cout << polygon.height << std::endl;
  return 0;
}