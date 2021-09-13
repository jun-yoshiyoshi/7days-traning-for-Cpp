#include "Dog.h"

Dog::Dog() {
	init("A Dog", "Bow,Bow");
}

Dog::~Dog() {
	cout << m_name << " cried " << m_voice << endl;
}
