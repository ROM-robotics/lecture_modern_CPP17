#include <iostream>
#include <string>

class Circle
{
	float radius;
	
	public:
		Circle(float r)
		{
			radius = r;
			std::cout << "Constructor\n" << "\tRadius = " << radius << " meter" << std::endl;
		}

		void calculateArea() const
		{
			std::cout << "Area of circle " << radius * radius * 3.1415 << " meter squares" << std::endl; 
		}
};

int main()
{
	Circle c1{0.5};
	c1.calculateArea();

	return 0;
}
