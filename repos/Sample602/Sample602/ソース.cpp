#include <iostream>
#include <string>
using namespace std;


template <typename T>
T add(T x, T y) {
	return x + y;
}

int main(int argc, char** argv) {
	cout << add<int>(4, 3) << endl;
	cout << add<double>(5.6, 3.3) << endl;
	cout << add <string>("jun", "yoshida") << endl;
	return 0;
}