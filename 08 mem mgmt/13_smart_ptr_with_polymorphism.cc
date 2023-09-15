 #include <vector>
 #include <memory>
 #include <iostream>
 
 class Rectangle
 {
    public:
        Rectangle(int w, int h) : width_{w}, height_{h} {}

        int width() const { return width_; }
        int height() const { return height_; }

        virtual void Print() const {
            std::cout << "Rectangle : " << width_ << " " << height_ << std::endl;
        }

    protected:
        int width_ = 0;
        int height_ = 0;
 };

 class Square : public Rectangle
 {
    public:
        explicit Square(int size) : Rectangle(size, size) {}

        void Print() const override{
            std::cout << "Square : " << width_ << " " << height_ << std::endl;
        }
 };

 int main()
 {
    std::vector<std::unique_ptr<Rectangle>> shapes;
    shapes.push_back(std::make_unique<Square>(5));
    shapes.push_back(std::make_unique<Rectangle>(3, 4));

    for (const auto& shape : shapes) {
        shape->Print();
    }

    return 0;
 }