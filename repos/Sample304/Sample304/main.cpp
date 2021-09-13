#include <iostream>
#include "Sample.h"

using namespace std;

int main(int argc, char** argv) {
	Sample s;
	s.setNum(5);
	cout << s.getNum() << endl;
	return 0;
}