
#include "player.h"

Player::Player(Point _miPlayer ,char _simboloPlayer) {
	
	miPlayer=_miPlayer;
	simboloPlayer = _simboloPlayer;
}

void Player::printPlayer(){
	int x= miPlayer.getX();
	int y= miPlayer.getY();
	positionCursor(x+8,2*y+30 );
	std::cout<<simboloPlayer;
}

void Player::moveUp() {
    miPlayer.setY(miPlayer.getY() - 1);
}

void Player::moveDown() {
    miPlayer.setY(miPlayer.getY() + 1);
}

void Player::moveLeft() {
    miPlayer.setX(miPlayer.getX() - 1);
}

void Player::moveRight() {
    miPlayer.setX(miPlayer.getX() + 1 );
}
