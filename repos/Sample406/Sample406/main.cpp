#include "Sample.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Sample* s = new Sample();

	s -> func1();

	//Sample::func1();

	s->func2();

	Sample::func2();

	delete s;

	return 0;
}