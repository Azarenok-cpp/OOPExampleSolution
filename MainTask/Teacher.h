#include "Student.h"

class Teacher {
private:
	const int BEST_MARK = 9;
public:
	int countBestStudents(Student* students, int size) {
		return 0;
	}

	Student getAllBestStudents(Student* students, int size, int* counter) {
		*counter = countBestStudents(students, size);

		Student* list_of_best = new[*counter]

		for (int i = 0; i < size; i++)
		{
			if ((students + i)->mark >= BEST_MARK) {
				return *(students + i);
			}
		}
		Student empty{};
		return empty;
	}


};