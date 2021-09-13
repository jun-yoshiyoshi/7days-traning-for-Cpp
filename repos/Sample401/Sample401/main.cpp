#include "Car.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Car car;
	car.setSpeed(40);
	car.drive(1.5);
	car.setSpeed(60);
	car.drive(2.5);

	cout<<"total drive for:" << car.getMigration()<<"km" << endl;
	return 0;
}