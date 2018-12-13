#include "Window.h"

Window::Window(){
	height = width = 400;
}

Window::Window(int w, int h) :	height(h),
							 	width(w),
								_window(NULL),
								renderer(NULL)
								{
}

Window::~Window(){
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(_window);
	SDL_Quit();
}

void Window::init(){
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout<<"SDL_INIT_ERROR"<<std::endl;
		return ;
	}
	_window = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
	renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
}

int	Window::handleEvents(SDL_Event event){
	switch(event.type) {
		case SDL_QUIT: { 
			return 0;
		}
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym){
				case SDLK_w: { 
					return 2;
				}
				case SDLK_a: { 
					return 3;
				}
				case SDLK_s: { 
					return 4;
				}
				case SDLK_d: { 
					return 5;
				}
				case SDLK_ESCAPE: 
				{
					return 0;
				}
			}
		}
	return 1;
}

void	Window::clear() const{
	SDL_RenderPresent(renderer);
	SDL_SetRenderDrawColor(renderer, 50, 50, 50, 255);
	SDL_RenderClear(renderer);
}

int 	Window::update(){
	SDL_PollEvent(&_e);	
	return handleEvents(_e);
}

Vec2	Window::center(){
	return Vec2(width / 2, height / 2);
}

