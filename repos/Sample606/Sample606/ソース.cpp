#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv) {

	list<int> l1;
	list<string> l2;

	l1.push_back(10);
	l2.push_back("a -");
	l1.push_back(20);
	l2.push_back("b-");
	l1.push_back(30);
	l2.push_back("c-");
	l1.push_front(999);
	l2.push_front("zzz");

	list<int>:: iterator itr1;
	list<string>::iterator itr2;

	itr1 = l1.begin();
	itr2 = l2.begin();

	itr1++;
	l1.insert(itr1, 0);
	l2.insert(itr2, "----");

	for (itr1 = l1.begin(); itr1 != l1.end(); itr1++) {
		cout << *itr1 << " ";
	}
	cout << endl;

	
	cout << endl;

	for (itr2 = l2.begin(); itr2 != l2.end(); itr2++) {
		cout << *itr2 << " ";
	}
	cout << endl;
	
	return 0;

}