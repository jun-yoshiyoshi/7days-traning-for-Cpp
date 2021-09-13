#include "car.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Car car1, car2;
	car1.speed = 40;
	car2.speed = 60;

	cout << "car1:" << endl;
	car1.drive(1.5);
	cout << "car2:" << endl;
	car2.drive(1.0);
	return 0;

}