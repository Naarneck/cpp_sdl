#ifndef VEC2_H
#define VEC2_H

#include <math.h>
#include <sstream>
#include <iostream>

class Vec2{

	private:
		float 	x;
		float 	y;

	public:
		Vec2();
		Vec2(float x1, float y1);
		Vec2(Vec2 const& rhs);
		Vec2& operator=(Vec2 const& rhs);
		Vec2 operator*(float const& rhs);
		Vec2 operator-(Vec2 const& rhs);	
		Vec2 operator+(Vec2 const& rhs);	
		~Vec2();

		float 	length();
		float 	dot(Vec2 vec);
		void 	normalize();
		float	getX()	const;
		float	getY()	const;
};

std::ostream& operator<<(std::ostream& o, Vec2 const& rhs);

#endif
