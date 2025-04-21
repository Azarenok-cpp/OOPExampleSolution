#include "main.h"
class Student {
public:
	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;

	//Default constructor, no arguments constructor
	Student() {
		cout << "Default constructor" << endl;
		name = "Undefined";
		age = 13;
		marks = nullptr;
		countMark = 0;
		alive = true;

	}


	//constructor with arguments, overloaded, with parameters
	Student(string name) : Student(name, 13, 0, true) {
		cout << "Constructor with arguments" << endl;
	}



	//canonical constructor 
	Student(string name, int age, int countMark, bool alive) {
		cout << "Canonical constructor with arguments" << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		this->countMark = countMark;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++)
		{
			*(marks + i) = 4;
		}
	}



	//copying constructor
	Student(const Student& student) : Student(student.name, student.age, //!!! constant link
		student.countMark, student.alive)
	{
		cout << "Copying constructor with arguments" << endl;
	}




	//destructor -- ONLY ONE
	~Student() {
		cout << "Destructor" << endl;
		if (marks) {
			delete[] marks;
		}
	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", marks: " + getAllMarks();
		s += ", alive: ";
		s += (alive ? "yes" : "no");
		return s;
	}

	string getAllMarks() {
		if (countMark == 0) {
			return "[]";
		}

		string s = "";
		
		for (int i = 0; i < countMark; i++)
		{
			s += to_string(*(marks + i)) + " ";
		}

		return s;
	}

	int getMark(int index) {
		return index < 0 || index > countMark ? 0 : marks[index];
	}

	void setmark(int index, int mark) {
		if (index >= 0 && index < countMark 
			&& marks) {
			marks[index] = mark;
		}
	}
};