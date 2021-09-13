#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {

	map<string, string> seasons;

	seasons["spring"] = "‚Í‚é";
	seasons["summer"] = "‚È‚Â";
	seasons["outum"] = "‚ ‚«";
	seasons["winter"] = "‚Ó‚ä";

	while (true) {
		cout << "input season";
		string s;
		cin >> s;
		string ans;
		ans = seasons[s];
		if (ans != "") {
			cout << s << " is " << ans << endl;
		}
		else {
			cout << "no such word" << endl;
		}
	}
	return 0;
}
