#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	vector<int> v1;
	vector<string> v2;
	v1.push_back(1);
	v2.push_back("abc");
	v1.push_back(2);
	v2.push_back("def");
	v1.push_back(3);
	v2.push_back("ghi");


	v1[1] = 0;
	v2[2] = "xyz";

	for (int i = 0; i < v1.size(); ++i) {
		cout << v1[i];
	}
	cout << endl;

	for (int i = 0; i < v2.size(); ++i) {
		cout << v2[i];
	}
	cout << endl;

	return 0;
}