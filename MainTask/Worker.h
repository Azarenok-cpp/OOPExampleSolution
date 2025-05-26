#pragma once
#include "Human.h"

class Worker : public Human {
public:
	string company;
	double salary;
	string name;

	Worker();
	Worker(string name, int age, bool gender, string company, double salary);
	Worker(const Worker& worker);
	~Worker();

	string getCompany();
	void setCompany(string company);
	double getSalary();
	void setSalary(double salary);
	string toString();

};
