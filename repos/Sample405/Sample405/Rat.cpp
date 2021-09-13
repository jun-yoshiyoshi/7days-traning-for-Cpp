#include "Rat.h"
#include <iostream>

using namespace std;

int Rat::s_count = 0;

Rat::Rat() :m_id(0) {
	++s_count;
	m_id = s_count;
}
	
Rat::~Rat() {
	cout << "one rat delete:" << m_id << endl;
	--s_count;
}

void Rat::shownum() {
	cout << "rat counting :" << s_count << endl;
}

void Rat::squeak() {
	cout << m_id << ": chu-chu-" << endl;
}