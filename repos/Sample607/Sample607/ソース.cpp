#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv) {

	vector<string> v1;
	list<string> l1;
	v1.push_back("HELLO");
	v1.push_back("WORLD");
	l1.push_back("hello");
	l1.push_back("world");
	l1.push_back("!");

	vector<string>::iterator itrv;
	list<string> ::iterator itrl;


	cout << "-vector-" << endl;
	for (itrv = v1.begin(); itrv !=v1.end(); ++itrv) {
		cout << *itrv << " ";
	}
	cout << endl;

	itrl =l1.begin();

	//cout << "-list-" << endl;
	//for (itrl = l1.begin(); itrl!=l1.end(); ++itrl) {
	//	cout << *itrl << " ";
	//}
	//cout << endl;

	cout << "-list remove -" << endl;
	l1.remove(*itrl);
	for (itrl = l1.begin(); itrl != l1.end(); ++itrl) {
		cout << *itrl << " ";
	}
	cout << endl;


	return 0;
}