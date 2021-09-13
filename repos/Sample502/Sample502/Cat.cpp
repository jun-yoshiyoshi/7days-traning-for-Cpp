#include "Cat.h"

Cat::Cat() {
	init("A Cat", "Myao,Myao");
}

Cat::~Cat() {
	cout << m_name << " cried " << m_voice << endl;
}

