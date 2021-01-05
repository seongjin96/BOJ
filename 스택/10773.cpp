/*
스택
가장 최근에 쓴 수를 지우는 문제
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num, sum = 0;
	cin >> N;

	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << "\n";
}