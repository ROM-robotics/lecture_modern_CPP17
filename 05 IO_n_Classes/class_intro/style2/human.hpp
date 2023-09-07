#include <iostream>
#include <string>
class Human
{
    public:
        Human()
        {
            std::cout << "Creating Human object, you need to set name and age" << std::endl;
        }

        Human(std::string name, int age): name_(name), age_{age} 
        {
            std::cout << "Creating Human object with name " << name_ << " and age " << age_ << std::endl;
        }

        void setName(std::string name)
        {
            name_ = name;
        }

        std::string getName() const
        {
            return name_;
        }

        void setAge(int age)
        {
            age_ = age;
        }

        int getAge() const
        {
            return age_;
        }
        void sayHello()
        {
            std::cout << "Hello!" << std::endl;
        }

    private:
        std::string name_;
        int age_;
};