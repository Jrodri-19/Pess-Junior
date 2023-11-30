
#ifndef PLAYER_H
#define PLAYER_H
#include "point.h"
#include "style.h"
#include <iostream>
class Player {
public:
	Point miPlayer;
    char simboloPlayer;
    Player(Point _miPlayer, char _simboloPlayer);

    void printPlayer();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
/*
	Point miPlayer;
	char simboloPlayer;
	Player(Point ,char);
	void printPlayer();
	
	void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
	*/
	
};

#endif

