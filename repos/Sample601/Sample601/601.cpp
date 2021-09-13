#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
	return a + b;
}

string add(string a, string b) {
	return a + b;
}

int main(int argc, char** argv) {
	cout << add(4, 3) << endl;

	cout << add("Jun", "Yoshida") << endl;
	return 0;
}