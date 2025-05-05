#include "Integer.h"

int main() {
	Integer num1{ 10 };
	Integer num2{ 5 };
	Integer result;
	cout << "Start: num1: " << num1.toString() << ", num 2: " << num2.toString() << endl;

	num1.add(num2);
	cout << "Add: " << num1.toString() << endl;

	num1.subtract(num2);
	cout << "Subtract:" << num1.toString();

	num1.multiply(num2);
	cout << "Multiply: " << num1.toString() << endl;

	num1.divide(num2);
	cout << "Divide: " << num1.toString() << endl;


	return 0;
}