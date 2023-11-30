#ifndef DELANTERO_H
#define DELANTERO_H
#include "player.h"
#include "point.h"
#include <iostream>
class delantero:public Player {
public:
	delantero(Point );
	void moveUp() override;
	void moveDown() override;
	void moveLeft() override;
	void moveRight() override;
private:
};

#endif

