#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	stack<int> stk;
	queue<int> que;
	int data[] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; ++i) {
		stk.push(data[i]);
		que.push(data[i]);
	}

	cout << "stack ";
	while (!stk.empty()) {
		cout << stk.top();
		stk.pop();
	}
	cout << endl;

	cout << "queue ";
	while (!que.empty()) {
		cout << que.front();
		que.pop();
	}
	cout << endl;

	return 0;
}