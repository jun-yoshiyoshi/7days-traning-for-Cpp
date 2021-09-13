#include <iostream>

using namespace std;

void ref(int&);

void print(int);

void ref(int& n) {
	n = 1;
}

void print(int n) {
	cout << "n=" << n << endl;
}

int main(int argc, char** argv) {
	int n = 5;

	print(n);

	ref(n);
	
	print(n);

	return 0;
}