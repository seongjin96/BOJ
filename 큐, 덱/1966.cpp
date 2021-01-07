/*
큐, 덱
큐의 개념이 응용된 문제
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, p;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int count = 0;
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int j = 0; j < N; j++) {
			cin >> p;
			q.push({ j, p });
			pq.push(p);
		}
		while (!q.empty()) {
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();
			if (pq.top() == val) {
				pq.pop();
				count++;
				if (idx == M) {
					cout << count << "\n";
					break;
				}
			}
			else {
				q.push({ idx, val });
			}
		}
	}
}