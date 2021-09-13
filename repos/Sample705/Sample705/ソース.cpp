#include <iostream>
#include<string>

using namespace std;

int main(int argc, char** argv) {

	char arr[] = "array of charr";

	string s1(arr);

	cout << s1 << endl;

	string s2 = "string of C++";

	printf("%s\n", s2.c_str());
	return 0;
}