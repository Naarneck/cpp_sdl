#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Vec2.h"
#include "Window.h"

class Unit {
	protected:
		std::string 	_name;
		int 			_hp;
		Vec2			_position;
		Vec2			_direction;
		SDL_Texture		*_texture;
		SDL_Rect		_bounds;

	public:
		Unit();
		Unit(Vec2 pos, Vec2 dir, const char* texName, Window *win);
		~Unit();

		void 	draw(Window *win);
	protected:
		void setBounds(Vec2 pos, Vec2 dim);
};

#endif
