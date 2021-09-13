#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {
	map <string, int> score;
	

	score["Tom"] = 100;
	score["Bob"] = 80;
	score["Mike"] = 60;
	
	cout << "Tom's score " << score["Tom"] << endl;
	cout << "Bob's score " << score["Bob"] << endl;
	cout << "Mike's score " << score["Mike"] << endl;
	
	return 0;
}