#ifndef PLAYER_H
#define PLAYER_H

#include "Unit.h"

class Player : public Unit {

	public:
		Player();
		Player(Vec2 pos, Vec2 dir, const char* texName, Window *win);
		~Player();

		void	moveUp();
		void	moveDown();
		void	moveLeft();
		void	moveRight();

		void 	handlInpust();
};

#endif
