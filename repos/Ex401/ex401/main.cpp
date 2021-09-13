#include "Vector2D.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Vector2D v;
	cin >> v.x;
	cin >> v.y;
	cout << "(x, y):(" << v.x << "," << v.y << ")" << endl;
	cout << "length:" << v.length() << endl;
	return 0;
}