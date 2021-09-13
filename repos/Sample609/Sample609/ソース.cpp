#include <iostream>
#include <set>
#include<string>

using namespace std;

int main(int argc, char** argv) {
	set<string> name;

	name.insert("Tom");
	name.insert("Bob");
	name.insert("Mike");

	name.insert("Bob");

	set<string>::iterator itrs;

	for (itrs = name.begin(); itrs != name.end(); ++itrs) {
		cout << *itrs << " ";
	}
	cout << endl;

	string n[] = { "Bob","Steave" };

	for (int i = 0; i < 2; ++i) {
		itrs =name.find(n[i]);
		if (itrs == name.end()) {
			cout << n[i] << " is not in this set" << endl;
		}
		else {
			cout << n[i] << " is in a set." << endl;
		}
	}

	return 0;
}