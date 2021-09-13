#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int* p = NULL;
	int i;
	p = new int[10];
	for (i = 0; i < 10; ++i) {
		p[i] = i * 2;
		cout << p[i] << " ";
	}
	cout << endl;
	return 0;
}