
#ifndef POINT_H
#define POINT_H
#include <iostream>
class Point {
public:
	
	Point();
	Point(int,int);
	int getX() ;
	int getY() ;
	void setX(int);
	void setY(int);
	Point operator+(const Point& ) const;
	Point operator-(const Point& ) const;
	bool operator==(const Point& ) const;
	bool operator!=(const Point& ) const;
	friend std::ostream& operator<<(std::ostream& , const Point& );
private:
	int x;
	int y;
};

#endif

