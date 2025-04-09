#include "main.h"
class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	//Default constructor, no arguments constructor
	Student() {
		cout << "Default constructor" << endl;
		name = "Undefined";
		age = 13;
		mark = 4.0;
		alive = true;

	}

	//toString, default, canonic --- must be in every method
	
	//constructor with arguments, overloaded, with parameters
	Student(string nm) {
		cout << "Constructor with arguments" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}

	//canonical constructor 
	Student(string nm, int a, double m, bool al) {
		cout << "Canonical constructor with arguments" << endl;
		name = nm;
		age = a;
		mark = m;
		alive = al;
	}

	//copying constructor
	Student(const Student& student) { //!!! constant link
		cout << "Copying constructor with arguments" << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}

	//destructor
	~Student() {
		cout << "Destructor" << endl;

	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", mark: " + to_string(mark);
		s += ", alive: ";
		s += (alive ? "yes" : "no");
		return s;
	}
};