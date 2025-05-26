#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point2D
{
private:
	int x;
	int y;
public:
	Point2D() :x(0), y(0) {};
	Point2D(int x, int y) { this->x = x; this->y = y;};
	int getX() const { return x; };
	void setX(int x) { this->x = x; };
	int getY() const { return y; }
	void setY(int y) { this->y = y; };
	string toString() {
		string s = "x = " + to_string(x) + "; y = " + to_string(y);
		return s;
	}
	Point2D sum(Point2D point);
	Point2D sub(Point2D point);
	Point2D minus(Point2D point);
	Point2D minus(int a);

	Point2D operator+(Point2D point);
	Point2D operator+(int value);

	Point2D operator-(Point2D point);
	Point2D operator-(int value);
	
	Point2D operator*(Point2D point);
	Point2D operator*(int value);

	Point2D operator/(Point2D point);
	Point2D operator/(int value);

};

