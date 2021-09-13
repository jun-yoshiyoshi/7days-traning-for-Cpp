#include <iostream>
#include "P1.h"
#include "P2.h"
#include "C1.h"
#include "C2.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "===no viratual===" << endl;
	P1* pC1 = new C1();
	delete pC1;

	cout << "===viratual===" << endl;
	P2* pC2 = new C2();
	delete pC2;

	return 0;
}