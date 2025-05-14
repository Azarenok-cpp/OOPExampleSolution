#include "Queue.h"

int main() {
	Queue queue;

	cout << "Input elements(0 to stop)";
	int input;
	do {
		cin >> input;
		queue.enqueue(input);
	} 
	while (input != 0);
	
	cout << "Queue:\n";
	while (!queue.isEmpty())
	{
		cout << queue.dequeue() << " ";
	}

	return 0;
}