#include "Student.h"

//void show(Student student) {
//	cout << "Name: " << student.name << endl;
//	cout << "Age: " << student.age << endl;
//	cout << "mark: " << student.mark << endl;
//	cout << "Alive: " << (student.alive ? "Yes" : "No") << endl;
//}

void change(Student& student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10.0;
	student.alive = false;

}

int main() {
	//Student st1, temp;

	//st1.name = "Bogdan";
	//st1.age = 14;
	//st1.mark = 9.5;
	//st1.alive = true;
	//
	//temp = st1;

	//cout << "Before: \n" << st1.getString();
	//cout << temp.getString();

	//st1.name = "Vova";
	////change(st1);

	//cout << "After: \n" << st1.getString();
	//cout << "\n" << temp.getString();

	Student* st1 = nullptr;

	st1 = new Student;

	st1->name = "Vlad";
	st1->age = 15;
	st1->mark = 9.9;
	st1->alive = true;

	cout << "Before:\n";
	cout << st1->getString() << endl;

	Student* st2 = st1;

	st2->name = "Matvey";

	cout << "\nAfter:\n";
	cout << st1->getString() << endl;

	return 0;
}