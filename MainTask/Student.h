#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	string getString() {
		string out = "Name: " + name + "\n";
		out += "Age: " + to_string(age) + "\n";
		out += "mark: " + to_string(mark) + "\n";
		out += "Alive: ";
		out += (alive ? "Yes\n" : "No\n");
		return out + "\n";
	}
};