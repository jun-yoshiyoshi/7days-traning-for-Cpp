#include <iostream>
#include "Vector2D.h"

using namespace std;

void vec(string, const Vector2D&);

void vec(string vecname, const Vector2D& v) {
	cout << vecname << "(" << v.x << "," << v.y << ")" << endl;
}

int main(int argc, char** argv) {

	Vector2D v1, v2, v3;

	v1.x = 1.0, v1.y = 2.0;
	
	v2 = v1;
	v3 = 4.0 * v1;

	vec("v1=", v1);
	vec("v2=", v2);
	vec("v1+v2=", v1+v2);
	vec("v3=", v3);
	v3 += v1;
	vec("v3=", v3);
	v1 -= v2;
	vec("v1=", v1);
	return 0;
}