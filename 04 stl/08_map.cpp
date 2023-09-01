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

	cout << "Size of StudentList: " << cpp_students.size() << endl;
	cpp_students[1509] = "ghostman";

	// .at(key)
	const string& ref = cpp_students.at(1509);
	cout<< ref << endl;

	// .count(key)
	cout << "ghostman counts: " << cpp_students.count(1509) << endl;

	// .contains(key)
	cout << "ghostman contains: " << cpp_students.contains(1509) << endl;
	return 0;
}

