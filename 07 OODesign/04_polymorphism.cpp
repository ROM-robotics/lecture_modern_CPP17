 #include <iostream>
 
 class Rectangle
 {
    public:
        Rectangle(int w, int h) : width_{w}, height_{h} {}

        int width() const { return width_; }
        int height() const { return height_; }
        virtual void Print() const;
        
    protected:
        int width_ = 0;
        int height_ = 0;
 };
void Rectangle::Print() const
{
    std::cout << "Rectangle : " << width_ << " " << height_ << std::endl;
}

 class Square : public Rectangle
 {
    public:
        explicit Square(int size) : Rectangle(size, size) {}
        void Print() const override;
 };
void Square::Print() const
{
    std::cout << "Square : " << width_ << " " << height_ << std::endl;
}

void PrintShape(const Rectangle& rect) { rect.Print(); }
 int main()
 {
    Square sq(10);
    Rectangle rec(10,  15);
    
    PrintShape(sq);
    PrintShape(rec);

    return 0;
 }