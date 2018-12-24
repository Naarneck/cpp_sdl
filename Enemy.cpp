#include "Enemy.h"

Enemy::Enemy(){
	_name = "Enemy";
	_hp = 100;
	_position = Vec2();
	_direction = Vec2();
	_texture = NULL;
}

Enemy::Enemy(Vec2 pos, Vec2 dir, const char* texName, Window *win){
	SDL_Surface*	surface;

	_position = pos;
	_direction = dir;

	surface = IMG_Load(texName);
	_texture = SDL_CreateTextureFromSurface(win->renderer, surface);
	SDL_FreeSurface(surface);
}

Enemy::~Enemy(){
	SDL_DestroyTexture(_texture);
}

void	Enemy::moveTo(Vec2 point){
	if (_position.y < point.y)
		_position.y += STEP;
	else
		_position.y -= STEP;
	if (_position.x < point.x)
		_position.x += STEP;
	else
		_position.x -= STEP;	
}

void	Enemy::moveTo(Unit unit){
	if (_position.y < unit.getPos().y)
		_position.y += STEP;
	else
		_position.y -= STEP;
	if (_position.x < unit.getPos().x)
		_position.x += STEP;
	else
		_position.x -= STEP;	
}
