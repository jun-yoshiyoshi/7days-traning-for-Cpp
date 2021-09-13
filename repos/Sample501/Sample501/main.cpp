#include <iostream>
#include "Car.h"
#include "Ambulance.h"

using namespace std;

int main(int argc, char** argv) {
	Car* pCar = new Car();

	pCar->setSpeed(40);

	pCar->drive(1.5);

	cout << pCar->getMigration() << endl;

	delete pCar;

	Ambulance* pAmb = new Ambulance();

	pAmb->setSpeed(80);

	pAmb->drive(0.5);

	cout << pAmb->getMigration() << endl;

	pAmb->savepeople();
	delete pAmb;
	
	return 0;
}