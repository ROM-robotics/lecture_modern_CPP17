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

        void setName(std::string name);

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
    protected:
        int my_protect_int = 3;

    private:
        std::string name_;
        int age_;
};

void Human::setName(std::string name)
{
            name_ = name;
}

class Alien : public Human
{
    public:
        Alien() {};
        int getvalue() { return my_protect_int; }

    protected: 
        float z;

    private:
        int hello;
};

int main()
{
    Alien a1;
    std::cout << a1.getvalue << std::endl;
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

    //std::cout << papa.my_protect_int << std::endl;

    return 0;
}