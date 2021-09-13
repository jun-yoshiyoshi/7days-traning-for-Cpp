#include "Car.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Car* pCar=NULL;
	pCar = new Car();
	pCar->setSpeed(40);
	pCar->drive(1.5);
	pCar->setSpeed(60);
	pCar->drive(2.5);

	cout << "total drive for:" << pCar->getMigration() << "km" << endl;
	delete pCar;
	return 0;
}