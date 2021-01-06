/*
큐, 덱
큐를 이용해 제거 과정을 구현하는 문제
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	queue<int> q;
	int ans[1001];

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	int idx = 0;
	while (!q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		ans[idx] = q.front();
		q.pop();
		idx++;
	}
	cout << "<";
	for (int i = 0; i < N - 1; i++) {
		cout << ans[i] << ", ";
	}
	cout << ans[N - 1] << ">";
}