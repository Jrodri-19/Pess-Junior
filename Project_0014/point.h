
#ifndef POINT_H
#define POINT_H

class Point {
public:
	
	Point();
	Point(int,int);
	int getX() const;
	int getY() const;
	void setX(int);
	void setY(int);
	void showPoint();
private:
	int x;
	int y;
};

#endif

