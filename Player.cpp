#include "Player.h"
#define STEP_PLAYER 2.0

Player::Player(){
	_name = "Player";
	_hp = 100;
	_position = Vec2();
	_direction = Vec2();
	_texture = NULL;
}

Player::Player(Vec2 pos, Vec2 dir, const char* texName, Window *win){
	SDL_Surface*	surface;

	_position = pos;
	_direction = dir;

	surface = IMG_Load(texName);
	_texture = SDL_CreateTextureFromSurface(win->renderer, surface);
	SDL_FreeSurface(surface);
}

Player::~Player(){
	SDL_DestroyTexture(_texture);
}

void	Player::moveUp(){
	_position = _position + Vec2(0, -STEP_PLAYER);
}

void	Player::moveDown(){
	_position = _position + Vec2(0, STEP_PLAYER);
}

void	Player::moveLeft(){
	_position = _position + Vec2(-STEP_PLAYER, 0);
}

void	Player::moveRight(){
	_position = _position + Vec2(STEP_PLAYER, 0);
}

