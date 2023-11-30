
#include "delantero.h"

delantero::delantero(Point miPlayer): Player(miPlayer, '9' ){

}

void delantero::moveUp() {
	Player::moveUp();
}
void delantero::moveDown() {
	Player::moveDown();
}
void delantero::moveLeft() {
	Player::moveLeft();
}
void delantero::moveRight() {
	Player::moveRight();
}
