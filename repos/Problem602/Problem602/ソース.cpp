#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {

	map<string, string> animals;

	animals["cat"] = "‚Ë‚±";
	animals["dog"] = "‚¢‚Ê";
	animals["bird"] = "‚Æ‚è";
	animals["pig"] = "‚Ô‚½";

	while (true) {
		cout << "input an animal name";
		string s;
		cin >> s;
		string ans;
		ans = animals[s];
		if (ans != "") {
			cout << s << " is " << ans << endl;
		}
		else {
			cout << "no such word" << endl;
		}
	}
	return 0;
}
