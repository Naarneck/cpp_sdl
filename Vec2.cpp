#include "Vec2.h"

Vec2::Vec2(){
	x = y = 0.0;
}

Vec2::Vec2(float x1, float y1){
	x = x1;
	y = y1;
}

Vec2::~Vec2(){
}

void	Vec2::normalize(){
	x /= length();
	y /= length();
}

float		Vec2::dot(Vec2 v2){
	return ((x * v2.x) + (y * v2.y));
}

float		Vec2::length(){
	return (sqrt((x * x) + (y * y)));
}

Vec2& Vec2::operator=(Vec2 const& rhs){
	x = rhs.x;
	y = rhs.y;
	return *this;
}

Vec2 Vec2::operator+(Vec2 const& rhs){
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2 Vec2::operator-(Vec2 const& rhs){
	return Vec2(x - rhs.x, y - rhs.y);
}

Vec2 Vec2::operator*(float const& rhs){
	return Vec2(x * rhs, y * rhs);
}

Vec2::Vec2(Vec2 const& copy){
	*this = copy;
}

std::ostream& operator<<(std::ostream& o, Vec2 const& rhs)
{
	o << '(' << rhs.x << ' ' << rhs.y << ")";
	return o;
}