#include "car.h"
#include <iostream>

using namespace std;

void Car::drive(double hour) {
	cout << "speed:" << speed << "hour:" << hour << "." << endl;
	cout << speed * hour << " is total run."<<endl;
}
