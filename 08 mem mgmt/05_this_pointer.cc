#include <iostream>

class Robot
{
    public:
        Robot(std::string name, std::string type, int wheels) : name_(name), type_(type), wheels_(wheels) {}

        void setName(std::string name) { this->name_ = name; }
        std::string getName() { return name_; }

    private:
        std::string name_;
        std::string type_;
        int wheels_;
};

int main()
{
    Robot amr("Amr", "Robot", 4);
    amr.setName("Tank");
    std::cout << amr.getName() << std::endl;


    return 0;
}