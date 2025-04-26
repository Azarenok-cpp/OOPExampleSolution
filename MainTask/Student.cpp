#include "Student.h"

string Student::getAllMarks() {
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

Student::Student(string name, int age, int countMark, bool alive) {
	//cout << "Canonical constructor with arguments" << endl;
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

//destructor -- ONLY ONE
Student::~Student() {
	//cout << "Destructor" << endl;
	if (marks) {
		delete[] marks;
	}
}


string Student::getName() { return name; }
void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() { return age; }
void Student::setAge(int age) {
	if (age >= 13 && age <= 18) {
		this->age = age;
	}
}

int Student::getCountMark() { return countMark; } //no setter needed! read-only field

int* Student::getMarks() { return marks; }

bool Student::isAlive() { return alive; }
void Student::setAlive(bool alive) { this->alive = alive; }

int Student::getMark(int index) {
	return index < 0 || index > countMark ? 0 : marks[index];
}
void Student::setMark(int index, int mark) {
	if (index >= 0 && index < countMark
		&& marks) {
		marks[index] = mark;
	}
}

string Student::toString() {
	string s = "Name: " + name;
	s += ", age: " + to_string(age);
	s += ", marks: " + getAllMarks();
	s += ", alive: ";
	s += (alive ? "yes" : "no");
	return s;
}
