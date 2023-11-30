#ifndef PORTERO_H
#define PORTERO_H
#include "player.h"
#include "point.h"
#include <iostream>
class portero:public Player {
public:
	portero(Point);
	void moveUp() override;
	void moveDown() override;

};

#endif



	