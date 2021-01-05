/*
스택
주어진 문자열이 올바른 괄호열인지 판단하는 문제
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	string VPS;
	stack<char> s;

	for (int i = 0; i < N; i++) {
		cin >> VPS;

		for (int j = 0; j < VPS.length(); j++) {
			if (s.empty() || VPS[j] == '(') {
				s.push(VPS[j]);
			}
			else {
				if (s.top() == '(' && VPS[j] == ')') {
					s.pop();
				}
				else {
					s.push(VPS[j]);
				}
			}
		}
		cout << (s.empty() ? "YES" : "NO") << "\n";
		while (!s.empty()) {
			s.pop();
		}
	}
}