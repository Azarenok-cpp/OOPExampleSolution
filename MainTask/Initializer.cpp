#include "Initializer.h"
void Initializer::init(Group group) {
	if (group.getCount() == 0) {
		return;
	}

	string names[]{ "Yarik", "Ivan", "Matwey", "Vlad","Timofey","Nikita","Bogdan",
		"Rodion", "Alexey", "Daniil", "Viktor", "Alice" };

	int minMark = 4;
	int maxMark = 10;

	int minAge = 13;
	int maxAge = 18;

	for (int i = 0; i < group.getCount(); i++)
	{
		group.getStudent(i).setName(names[rand() % 12]);
		group.getStudent(i).setAge(rand() % (maxAge - minAge + 1) + minAge);

		for (int j = 0; j < group.getStudent(i).getCountMark(); j++)
		{
			group.getStudent(i).getMarks()[j] = rand() % (maxMark - minMark + 1) + minMark;
		}
	}
}
