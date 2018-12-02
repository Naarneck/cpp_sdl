#include "Window.h"

Window::Window(){
	_height = _width = 400;
}

Window::Window(int h, int w) :	_height(h),
							 	_width(w),
								_window(NULL),
								_screen(NULL){
}

Window::~Window(){
	SDL_FreeSurface(_screen);
	SDL_DestroyWindow(_window);
	SDL_Quit();
}

void Window::init(){
	SDL_Init(SDL_INIT_VIDEO);
	_window = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, _width, _height, SDL_WINDOW_OPENGL);
	_screen = SDL_GetWindowSurface(_window);
}

int	Window::handleEvents(SDL_Event event){
	switch(event.type) {
		case SDL_QUIT: { 
			return 0;
		}
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym){
				case SDLK_t: { 
					return 2;
				}
			}
		}
	return 1;
}

int Window::update(){
	SDL_PollEvent(&_e);
	handleEvents(_e);
	std::cout<<"update"<<std::endl;
	return 1;
}