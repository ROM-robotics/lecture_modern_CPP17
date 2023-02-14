#include <string>
#include <map>
#include <iostream>
using namespace std;

int main()
{
	using StudentList = std::map<int, string>;
	StudentList cpp_students;

	cpp_students.emplace(1509, "Nacho");
	cpp_students.emplace(1040, "Pepe");
	cpp_students.emplace(8820, "Marcelo");

	for(const auto& [id, name]: cpp_students)
	{
		cout << "id: " << id << ", " << name << endl;
	}
}

