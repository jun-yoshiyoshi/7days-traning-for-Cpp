#include "Vector2D.h"

Vector2D& Vector2D::operator=(const Vector2D& v) {
	x = v.x;
	y = v.y;
	return *this;
}

Vector2D& Vector2D::operator+=(const Vector2D& v) {
	x += v.x;
	y += v.y;
	return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& v) {
	x -= v.x;
	y -= v.y;
	return *this;
}


Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
	Vector2D v;
	v.x = v1.x+v2.x;
	v.y = v1.y+v2.y;
	return v;
}

Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
	Vector2D v;
	v.x = v1.x - v2.x;
	v.y = v1.y - v2.y;
	return v;
}

Vector2D operator*(const double d,const Vector2D& v) {
	Vector2D r;
	r.x = d * v.x;
	r.y = d * v.y;
	return r;
}
