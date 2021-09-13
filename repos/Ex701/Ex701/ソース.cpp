#include <iostream>
#include "Vector2D.h"

using namespace std;

void vec(string, const Vector2D&);

void vec(string vecname, const Vector2D& v) {
	cout << vecname << "(" << v.x << "," << v.y << ")" << endl;
}

int main(int argc, char** argv) {

	Vector2D v1, v2;
	cout << "puput for v1(x,y)" << endl;
	cin >> v1.x >> v1.y;
	cout << "puput for v2(x,y)" << endl;
	cin >> v2.x >> v2.y;

	vec("v1=", v1);
	vec("v2=", v2);

	if (v1 == v2) {
		cout << "v1==v2" << endl;
	}
	else
		cout << "v1!=v2" << endl;

	return 0;
}