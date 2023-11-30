#include "portero.h"

portero::portero(Point miPlayer): Player(miPlayer, '1') {
	
}
void portero::moveUp() {Player::moveUp();}
void portero::moveDown() {Player::moveDown();}
