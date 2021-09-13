#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() :m_speed(0.0), m_migration(0.0) {
	cout << "Car instance" << endl;
}
Car::~Car() {
	cout << "Delete car instance";
}

void Car::setSpeed(double speed) {
	m_speed = speed;
}
double Car::getSpeed() { 
	return m_speed; 
}

double Car::getMigration() { 
	return m_migration; 
}

void Car::drive(double hour) {
	cout<<"speed:"<<m_speed<<" time:"<<hour << endl;
	cout<<"drive for:"<< m_speed * hour<<"km" << endl;
	m_migration += hour*m_speed; 
}
