#ifndef ENEMY_H
#define ENEMY_H

#include "Unit.h"

class Enemy : public Unit {

	public:
		Enemy();
		Enemy(Vec2 pos, Vec2 dir, const char* texName, Window *win);
		~Enemy();

		void	moveUp();
		void	moveDown();
		void	moveLeft();
		void	moveRight();

		void	moveTo(Vec2 pos);
		void	moveTo(Unit unit);
};

#endif
