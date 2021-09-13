#include "Sample.h"
#include <iostream>

using namespace std;

int Sample::s_b = 0;

void Sample::func1() {
	cout << "===func1===" << endl;
	m_a = 1;
	s_b = 2;
	cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl;
}


void Sample::func2() {
	cout << "===func2===" << endl;
	//m_a = 3;
	s_b = 4;
	//cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl;
}
