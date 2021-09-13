#include "Animal.h"



Animal::Animal() {}
Animal::~Animal() {}

string Animal::getname() {
	return m_name;
}
void Animal::cry() {
	cout << m_voice << endl;
}

void Animal::init(string name, string voice) {
	m_name = name;
	m_voice = voice;
}
