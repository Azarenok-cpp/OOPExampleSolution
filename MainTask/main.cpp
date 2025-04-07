#include "Student.h"
#include "Teacher.h"

int main() {
	Student* list = nullptr;


	int size;
	cout << "Number of studemts: ";
	cin >> size;

	list = new Student[size];

	cout << "Theur marks:";
	for (int i = 0; i < size; i++)
	{
		cout << "Name: ";
		cin >> list[i].name;

		cout << "Age: ";
		cin >> list[i].age;

		cout << "AVG mark: ";
		cin >> list[i].mark;

		cout << "Is alive (y/n): ";
		char ans;

		cin >> ans;

		list[i].mark = tolower(ans) == 'y';
	}

	Teacher teacher;

	Student best = teacher.getAllBestStudents(list, size);

	string msg = best.alive ? "Best student is " + best.name : "No best students";

	return 0;
}