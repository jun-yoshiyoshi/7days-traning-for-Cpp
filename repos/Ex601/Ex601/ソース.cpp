#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** args) {
	vector<int> v;

	while (true) {
		int num;
		cout << "input number";
		cin >> num;
		if (num > 0) {
			v.push_back(num);
		}
		else {
			break;
		}
	}
	
	int sum = 0;
	vector<int>::iterator itr_num;
	for (itr_num = v.begin(); itr_num != v.end(); ++itr_num) {
		cout << *itr_num << "";
		sum += (*itr_num);
	}
	cout << endl;

	cout << "total " << sum << endl;
	
	return 0;
}