#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int* p = NULL;

	p = new int();

	*p = 123;

	cout << *p << endl;

	delete p;

	return 0;
}