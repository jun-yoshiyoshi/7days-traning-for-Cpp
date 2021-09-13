#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s = "ABCDEFG";
		cout <<"length() " << s.length() << endl;
		cout << "[0] " << s[0] << endl;
		cout << "s[4] " << s[4] << endl;
		cout << "substr " << s.substr(2, 4) << endl;
	return 0;
}