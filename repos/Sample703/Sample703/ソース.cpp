#include <iostream>
#include <string>
#include "Sample703.h"

using namespace std;

int main(int argc,char** argv) {
	Sample703 s;
	cout << "s.m_cst " << s.m_cst << endl;
	s.setStr("ABCDEFG");
	cout << "s.getStr " << s.getStr() << endl;
	return 0;
}