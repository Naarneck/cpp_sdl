#ifndef WINDOW_H
#define WINDOW_H

#include <sstream>
#include <SDL2/SDL.h>
#include <math.h>

class Window{
	private:
		int 			_height;
		int 			_width;
		SDL_Window*		_window;
		SDL_Surface*	_screen;
		SDL_Event 		_e;

	public:
		Window();
		Window(int h, int w);
		~Window();

		void	init();
		int 	handleEvents(SDL_Event event);
		int 	update();
};

#endif
