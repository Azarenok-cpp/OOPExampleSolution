#include "Manager.h"
#include "Initializer.h"

int main() {
	int count;

	cout << "Amount of students: ";
	cin >> count;

	Student* list = nullptr;

	Initializer initializer;
	Manager manager;

	initializer.init(list, count);

	cout << "List of students:\n";
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}

	int size = 0;
	Student* bestList = manager.getBeststudents(list, count, &size);

	cout << "List of BEST students: ";

	for (int i = 0; i < size; i++)
	{
		cout << bestList[i].toString() << endl;
	}

	Student* worstList = manager.getBeststudents(list, count, &size);

	cout << "List of WORST students: ";

	for (int i = 0; i < size; i++)
	{
		cout << worstList[i].toString() << endl;
	}

	delete[] list;
	delete[] bestList;
	delete[] worstList;


	return 0;
}