#include <iostream>
#include "human.hpp"

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