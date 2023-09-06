#include <iostream>
#include <string>

class Student
{
	public:
		Student(std::string name) : name_{name} {};
		// this function *might* change the object
		const std::string& name() { return name_; }; // where is const?

	private:
		std::string name_;
};

void Print(const Student& stu)
{
	std::cout << "Student: " << stu.name() << std::endl;
}

int main()
{
	Student s1{"mg mg"};
	Print(s1);
	return 0;
}

