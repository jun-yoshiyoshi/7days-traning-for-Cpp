#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

	vector<int> v;

	int times;
	int count = 0;
	cout << "input number count, please" << endl;
	cin >> times;
	
	while (count<times) {
		cout << "input number please" << endl;
		int num;
		cin >> num;
		v.push_back(num);
		++count;
	}

	int sum = 0;
	int max_num = v[0]; int min_num = v[0];


	vector <int> ::iterator itr;

	for (itr = v.begin(); itr != v.end(); ++itr) {

		int num = *itr;

		cout << num << " ";
		sum += num;

		if (num > max_num)max_num = num;
		if (num < min_num)min_num = num;
	}
	cout << "sum " << sum << endl;
	cout << "max " << max_num << endl;
	cout << "min " << min_num << endl;

	return 0;
}