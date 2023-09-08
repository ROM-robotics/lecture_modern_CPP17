#include <iostream>
#include <string>

class Employee {
    public:
        std::string name;
        int age;
    protected: // Protected access specifier
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) 
        {
            salary = s; /* Protected but inheritance is OK */
        }
        int getSalary() 
        {
            return salary;
        }
};

int main() {
  Programmer mg_ba;
  mg_ba.setSalary(50000);
  mg_ba.bonus = 15000;
  std::cout << "Salary: " << mg_ba.getSalary() << "\n";
  std::cout << "Bonus: " << mg_ba.bonus << "\n";

  // Error
  //mg_ba.salary = 10000;

  // Error
  //std::cout << mg_ba.salary << std::endl; /* calling protected data member from outside of the class */
  
  return 0;
}