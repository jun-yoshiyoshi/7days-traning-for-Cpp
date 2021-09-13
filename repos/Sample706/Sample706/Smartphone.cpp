#include "Smartphone.h"

void Smartphone::call(string number) {
	cout << number << " was calling" << endl;
}

void Smartphone::hung_up() {
	cout << "call was hunged up." << endl;
}

void Smartphone::play() {
	cout << "played a music" << endl;
}

void Smartphone::stop() {
	cout << "stop a music" << endl;
}
