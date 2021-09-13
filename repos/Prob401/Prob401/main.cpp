#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	double* p = NULL;

	p = new double[5];
	for (int i = 0; i < 5; ++i) {
		p[i] = i * 0.1;
	}

	for (int i = 0; i < 5; ++i) {
		cout << p[i]<<" ";
	}
	cout << endl;
	delete[] p;
	return 0;
}