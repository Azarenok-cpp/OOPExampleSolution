#include "point2D.h"

int main() {
	//+, -, *, /, %, c++, ++c, -c
	Point2D a(1, 1);
	Point2D b(2, 2);

	cout << a.toString() << " + " << b.toString() << " = " << a.sum(b).toString();
	return 0;
}