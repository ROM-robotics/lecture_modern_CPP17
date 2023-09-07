#include <iostream>
#include <string>
class Human
{
    public:
        Human();
        Human(std::string name, int age);
        void sayHello()
        {
            std::cout << "Hello!" << std::endl;
        }
        void setName(std::string name);
        std::string getName() const;
        void setAge(int age);
        int getAge() const;

    private:
        std::string name_;
        int age_;
};