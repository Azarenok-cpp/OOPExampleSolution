#include "point2D.h"
Point2D Point2D::sum(Point2D point) {


Point2D Point2D::sub(Point2D point) {
	return Point2D(x - point.x, y - point.y);

}
Point2D Point2D::minus(Point2D point) {
	return Point2D(-point.x, -point.y);
}
Point2D Point2D::minus(int a) {
	return Point2D(x + a, y + a);
}



Point2D Point2D::operator+(Point2D point){
	return sum(point);
}
Point2D Point2D::operator+(int value){}

Point2D Point2D::operator-(Point2D point){}
Point2D Point2D::operator-(int value){}

Point2D Point2D::operator*(Point2D point){}
Point2D Point2D::operator*(int value){}

Point2D Point2D::operator/(Point2D point){}
Point2D Point2D::operator/(int value){}