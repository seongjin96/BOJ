/*
ť, ��
���� ������ ������ �ǽ��ϴ� ����. (�Է� ũ�Ⱑ �ʹ� �۾Ƽ� ��ȿ������ �������ε� ����� ������, �������̸� ���� �� �ð� ���⵵�� O(1)�̵��� ������ �ּ���.)
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