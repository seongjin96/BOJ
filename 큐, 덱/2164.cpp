/*
큐, 덱
큐를 사용하여 동작을 구현하는 문제
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (1) {
		if (q.size() == 1) {
			break;
		}
		else {
			q.pop();
		}
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}