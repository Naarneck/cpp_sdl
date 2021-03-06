#include "Unit.h"

Unit::Unit(){
	_name = "unknown";
	_hp = 100;
	_position = Vec2();
	_direction = Vec2();
	_texture = NULL;
}

Unit::Unit(Vec2 pos, Vec2 dir, const char* texName, Window *win){
	SDL_Surface*	surface;

	_position = pos;
	_direction = dir;

	surface = IMG_Load(texName);
	_texture = SDL_CreateTextureFromSurface(win->renderer, surface);
	SDL_FreeSurface(surface);
}

Unit::~Unit(){
	SDL_DestroyTexture(_texture);
}

void Unit::draw(Window *win){
	setBounds(_position, Vec2(50 ,50)); //size 50x50
	std::cout<<"("<<_bounds.x<<" , "<<_bounds.y<<")("<<_bounds.w<<" , "<<_bounds.h<<")"<<std::endl;
	if (_texture){
		SDL_RenderCopy(win->renderer, _texture, NULL, &_bounds);
	}
	else
		SDL_RenderFillRect(win->renderer, &_bounds);
	return ;
}

void Unit::setBounds(Vec2 pos, Vec2 dim){
	_bounds.x = pos.x;
	_bounds.y = pos.y;
	_bounds.w = dim.x;
	_bounds.h = dim.y;
}

Vec2 Unit::getPos(){
	Vec2 vec = Vec2(_position.x, _position.y);
	std::cout<<vec<<std::endl;
	return vec;
}