#include "Student.h"
#include "Teacher.h"

int main() {
	Student st1{ "Alex", 15,10,true };

	cout << st1.toString();

	for (int i = 0; i < st1.countMark; i++)
	{
		cout << st1.getMark(i) << endl;
	}
	return 0;
}