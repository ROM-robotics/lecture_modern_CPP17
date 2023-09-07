#include <iostream>
#include <cmath>

class Point{
    public:
        Point(int x, int y) : x_{x}, y_{y} {}

        static float Dist(const Point& a, const Point& b)
        {
            int diff_x = a.x_ - b.x_;
            int diff_y = a.y_ - b.y_;

            return sqrt(diff_x * diff_x + diff_y * diff_y);
        }

        float Dist(const Point& b) const
        {
            int diff_x = x_ - b.x_;
            int diff_y = y_ - b.y_;

            return sqrt(diff_x * diff_x + diff_y * diff_y);
        }

    private:
        int x_ = 0;
        int y_ = 0;
};


int main()
{
    Point p1{1, 1};
    Point p2{2, 2};

    std::cout << Point::Dist(p1, p2) << std::endl;

    std::cout << p1.Dist(p2) << std::endl;
    
    return 0;
}