#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int* p = NULL;

	p = new int[10];
	for (int i = 0; i < 10; ++i) {
		p[i] = i*2;
		cout << p[i] << " ";
	}

	cout  << endl;

	delete[] p;

	return 0;
}