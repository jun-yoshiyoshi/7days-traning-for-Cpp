#include <iostream>
#include"vector2D.h"

using namespace std;

int main(int argc, char** argv) {
	Vector2D v;
	cout << "v.x=";
	cin >> v.x;
	cin >> v.y;
	cout << "v=(" << v.x << "," << v.y << ")" << endl;
	cout << "v.length is " << v.length() << endl;
	return 0;
}