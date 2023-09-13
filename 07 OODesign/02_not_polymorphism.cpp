 #include <iostream>
 
 class Rectangle
 {
    public:
        Rectangle(int w, int h) : width_{w}, height_{h} {}

        int width() const { return width_; }
        int height() const { return height_; }

        void Print() const {
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

        void Pint() const {
            std::cout << "Square : " << width_ << " " << height_ << std::endl;
        }
 };

 int main()
 {
    Square sq(5);
    sq.Pint();
    
    Rectangle r(3, 4);
    r.Print();
    

    return 0;
 }