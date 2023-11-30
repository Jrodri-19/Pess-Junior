
#ifndef PLAYER_H
#define PLAYER_H
#include "point.h"
#include "style.h"
#include <iostream>
class Player {
public:
	Point miPlayer;
    char simboloPlayer;
    Player(Point miPlayer, char simboloPlayer);
    void printPositionPlayer();
	virtual void moveUp();
	virtual void moveDown();
	virtual void moveLeft();
	virtual void moveRight();
};

#endif

