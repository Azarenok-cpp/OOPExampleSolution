#pragma once
#include <iostream>
#include <string>
using namespace std;

class Integer
{
private:
	int number;
public:

	Integer(int number);

	Integer() : Integer(0) {}
	Integer(const Integer& num);

	void set(int number);
	int get();

	void add(Integer object2);
	void subtract(Integer object2);
	void divide(Integer object2);
	void multiply(Integer object2);



	string toString();

};

