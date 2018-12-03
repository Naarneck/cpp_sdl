#include "Unit.h"

Unit::Unit(){
	_position = Vec2();
	_direction = Vec2();
	_texture = NULL;
}

Unit::Unit(Vec2 pos, Vec2 dir, std::string name){
	_position = Vec2();
	_direction = Vec2();
	_texture = NULL; //load from name
}

Unit::~Unit(){
}
