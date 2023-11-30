
#include "point.h"
#include <iostream>

Point::Point() {
	x=0;
	y=0;
}
Point::Point(int _x,int _y){
	x=_x;
	y=_y;
}
int Point::getX()  {
    return x;
}

int Point::getY()  {
    return y;
}
void Point::setX(int _x){
	x= _x;
}
void Point::setY(int _y){
	y= _y;
}
//Sobrecarga
Point Point::operator+(const Point& otherPoint) const{
	return Point(x + otherPoint.x, y + otherPoint.y);
}
Point Point::operator-(const Point& otherPoint) const{
	return Point(x - otherPoint.x, y - otherPoint.y);
}
bool Point::operator==(const Point& otherPoint) const{
	return (x == otherPoint.x) && (y == otherPoint.y);
}
bool Point::operator!=(const Point& otherPoint) const{
	return (x != otherPoint.x) || (y != otherPoint.y);
}
std::ostream& operator<<(std::ostream& os, const Point& _point) {
	os << "(" << _point.x << ", " << _point.y << ")";
	return os;
}
