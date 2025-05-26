#pragma once
#include "main.h"

class Human
{
protected:
	string name;
	int age;
	bool gender;	// true - male, false - female

public:
	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);
	~Human();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	bool isGender();
	void setGender(bool gender);
	string toString();
};
