#include "Manager.h"
Student* Manager::getBeststudents(Group group) {
	*count2 = 0;
	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() >= 8) {
			++*count2;
		}
	}

	Student* best = new Student[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() >= 8) {
			best[j++] = list[i];
		}
	}

	return best;

}

Student* Manager::getWorststudents(Group group) {
	*count2 = 0;
	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() <= 5) {
			++* count2;
		}
	}

	Student* worst = new Student[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() < 8) {
			worst[j++] = list[i];
		}
	}

	return worst;

}