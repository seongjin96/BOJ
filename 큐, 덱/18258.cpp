/*
큐, 덱
큐의 개념을 익히고 실습하는 문제. 연산 당 시간 복잡도가 O(1)이어야 한다는 점에 유의하세요.
*/

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	string command;
	queue<int> q;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command.compare("push") == 0) {
			cin >> num;
			q.push(num);
		}
		else if (command.compare("pop") == 0) {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command.compare("size") == 0) {
			cout << q.size() << "\n";
		}
		else if (command.compare("empty") == 0) {
			cout << (q.empty() ? "1" : "0") << "\n";
		}
		else if (command.compare("front") == 0) {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (command.compare("back") == 0) {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
}