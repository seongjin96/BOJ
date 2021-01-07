/*
큐, 덱
덱을 활용하여 큐를 회전시키는 문제
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, num;
	int arr[51];
	deque<int> dq;
	int cnt = 0, idx = 0, dq_idx = 0;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		arr[i] = num;
	}
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	while (1) {
		if (idx == M) {
			break;
		}
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == arr[idx]) {
				dq_idx = i;
				break;
			}
		}
		while (dq.front() != arr[idx]) {
			if (dq_idx < dq.size() - dq_idx) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			else {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			cnt++;
		}
		dq.pop_front();
		idx++;
	}
	cout << cnt << "\n";
}