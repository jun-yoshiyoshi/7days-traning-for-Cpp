#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D() :x(0.0), y(0.0) {
}

double Vector2D::length() {
	double length;
	length = sqrt(x * x + y * y);
	return length;
}


