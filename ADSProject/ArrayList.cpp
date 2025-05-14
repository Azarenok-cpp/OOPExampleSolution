//#include "ArrayList.h"
//
//void ArrayList::add(int value, int size) {
//	if (size < 0) {
//		return;
//	}
//	if (array == nullptr) {
//		array = new int[1];
//		array[0] = value;
//	}
//
//	size++;
//	int* copy = new int[size];
//
//	for (int i = 0; i < size-1; i++)
//	{
//		copy[i] = array[i];
//	}
//
//	copy[size + 1] = value;
//	size++;
//
//	array = copy;
//}
//
//
//
//void ArrayList::add(int index, int value, int size) {
//	if (array == nullptr) {
//		array = new int[index + 1];
//		array[index];
//	}
//	
//	if (index < 0 || size < 0) {
//		return;
//	}
//
//	int* copy = new int[size + 1];
//	
//	for (int i = 0, j = index; i < size + 1; i++)
//	{
//
//	}
//
//	
//}