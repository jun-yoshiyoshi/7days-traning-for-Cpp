#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

#include <iostream>
#include <string>

using namespace std;

class Vector2D
{
public:
	double x;
	double y;

	Vector2D& operator=(const Vector2D& v);
	Vector2D& operator+=(const Vector2D& v);
	Vector2D& operator-=(const Vector2D& v);

	double length();

	bool operator==(const Vector2D& v1)const;
	bool operator!=(const Vector2D& v1)const;

private:
	static const double EPS;

};

Vector2D operator+(const Vector2D&, const Vector2D&);
Vector2D operator-(const Vector2D&, const Vector2D&);
Vector2D operator*(const double, const Vector2D& v);


#endif


