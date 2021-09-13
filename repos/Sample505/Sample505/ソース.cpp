#include "Tank.h"
#include "Car.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Car* pCar=new Car();
	Tank* pTank = new Tank();

	pCar->drive();
	pTank->drive();

	delete pCar, pTank;

	return 0;
}