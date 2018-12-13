#ifndef WINDOW_H
#define WINDOW_H

#include <sstream>
#include <SDL2/SDL.h>
#include <math.h>
#include <iostream>
#include <vector>
#include "Vec2.h"

class Window{
	public:
		SDL_Renderer*	renderer;
		int 			height;
		int 			width;

	private:
		SDL_Window*		_window;
		SDL_Event 		_e;

	public:
		Window();
		Window(int w, int h);
		~Window();

		void	init();
		void	clear() const;
		int 	handleEvents(SDL_Event event);
		int 	update();
		Vec2	center();
};

#endif
