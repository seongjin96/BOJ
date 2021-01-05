/*
스택
스택의 개념을 익히고 실습하는 문제
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	cin >> N;

	string command;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command.compare("push") == 0) {
			cin >> num;
			s.push(num);
		}
		else if (command.compare("pop") == 0) {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (command.compare("size") == 0) {
			cout << s.size() << "\n";
		}
		else if (command.compare("empty") == 0) {
			cout << (s.empty() ? "1" : "0") << "\n";
		}
		else if (command.compare("top") == 0) {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
	}
}