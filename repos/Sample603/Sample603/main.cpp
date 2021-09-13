#include <iostream>
#include <string>

#include "Calc.h"

using namespace std;

int main(int argc, char** argv) {
	Calc<int> i1;
	Calc<double> i2;
	Calc<string> i3;

	i1.set(1, 2);
	i2.set(2.3, 3.4);
	i3.set("abc", "xyz");

	cout << i1.add() << endl << i2.add() << endl << i3.add() << endl;
	return 0;
}