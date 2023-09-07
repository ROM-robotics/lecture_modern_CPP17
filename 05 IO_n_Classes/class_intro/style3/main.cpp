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

int main()
{
    Human bobo;
    bobo.setName("Bobo");
    bobo.setAge(10);

    bobo.sayHello();

    std::cout << "Name: " << bobo.getName() << std::endl;
    std::cout << "Age: " << bobo.getAge() << std::endl;

    Human koko("Koko", 20);
    koko.sayHello();
    std::cout << "Name: " << koko.getName() << std::endl;
    std::cout << "Age: " << koko.getAge() << std::endl;

    Human papa{"Papa", 30};
    papa.sayHello();
    std::cout << "Name: " << papa.getName() << std::endl;
    std::cout << "Age: " << papa.getAge() << std::endl;

    return 0;
}