#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() :m_speed(0.0), m_migration(0.0) {
cout<<"===AN INSTANCE OF CAR CLASS ==="<<endl;
}
Car::~Car() { 
	cout<< "===DELETE OF CAR INSTANCE==="<<endl;
}

void Car::setSpeed(double speed) {
	m_speed=speed; 
}
double Car::getSpeed() { 
	return m_speed; 
}

double Car::getMigration() { 
	return m_migration;
}

void Car::drive(double hour) { 
	cout << "speed:" << m_speed << "km " << " driving time:" << hour << "hour" << endl;
	cout << "total:" << m_speed * hour << "km" << endl;

	m_migration += m_speed * hour;
	; }
