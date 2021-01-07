/*
큐, 덱
덱의 개념을 익히고 실습하는 문제. (입력 크기가 너무 작아서 비효율적인 구현으로도 통과가 되지만, 가급적이면 연산 당 시간 복잡도가 O(1)이도록 구현해 주세요.)
*/

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	string command;
	deque<int> dq;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command.compare("push_front") == 0) {
			cin >> num;
			dq.push_front(num);
		}
		else if (command.compare("push_back") == 0) {
			cin >> num;
			dq.push_back(num);
		}
		else if (command.compare("pop_front") == 0) {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (command.compare("pop_back") == 0) {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (command.compare("size") == 0) {
			cout << dq.size() << "\n";
		}
		else if (command.compare("empty") == 0) {
			cout << (dq.empty() ? "1" : "0") << "\n";
		}
		else if (command.compare("front") == 0) {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (command.compare("back") == 0) {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}
}