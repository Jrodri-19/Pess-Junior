
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
int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}
void Point::setX(int _x){
	x= _x;
}
void Point::setY(int _y){
	y= _y;
}
void Point::showPoint(){
	std::cout << "Point (" << x << ", " << y << ")" << std::endl;
}

