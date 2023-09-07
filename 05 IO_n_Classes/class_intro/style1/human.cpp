#include <iostream>
#include <string>
#include "human.hpp"

Human::Human()
{
    std::cout << "Creating Human object, you need to set name and age" << std::endl;
}

Human::Human(std::string name, int age): name_(name), age_{age} 
{
    std::cout << "Creating Human object with name " << name_ << " and age " << age_ << std::endl;
}

void Human::setName(std::string name)
{
    name_ = name;
}

std::string Human::getName() const
{
    return name_;
}

void Human::setAge(int age)
{
    age_ = age;
}

int Human::getAge() const
{
    return age_;
}