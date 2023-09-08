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

// Derived class ( Child )
class Polygon : public GeometryShape 
{
    public:
        std::string polygon_type;
        std::string get_polygon_type() { return polygon_type; }

};

// Derived class (grandchild)
class Parallelogram: public Polygon
{
    public:
        int degree;
        int get_degree() { return degree; }
};

int main() 
{
    Parallelogram parallelogram;
    parallelogram.height = 10;
    parallelogram.width = 20;
    parallelogram.polygon_type = "rectangle";
    parallelogram.degree = 90;

    std::cout << parallelogram.get_degree() << std::endl;
    std::cout << parallelogram.get_polygon_type() << std::endl;
    std::cout << parallelogram.height << std::endl;
    std::cout << parallelogram.width << std::endl;
    std::cout << parallelogram.getHeight() << std::endl;
    
    return 0;
}