#include "Rat.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Rat* r1, * r2, * r3;
	r1 = new Rat();
	Rat::shownum();
	r2 = new Rat();
	r3 = new Rat();
	r2->squeak();
	r3->squeak();
	Rat::shownum();
	delete r1;
	delete r2;
	Rat::shownum();
	delete r3;
	Rat::shownum();
	return 0;
}