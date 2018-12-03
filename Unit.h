#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <SDL2/SDL.h>
#include "Vec2.h"

class Unit{
	private:
		Vec2			_position;
		Vec2			_direction;
		SDL_Surface*	_texture;

	public:
		Unit();
		Unit(Vec2 pos, Vec2 dir, std::string name);
		~Unit();

};

#endif
