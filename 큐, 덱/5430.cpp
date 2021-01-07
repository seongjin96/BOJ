/*
큐, 덱
덱을 활용하여 시간복잡도를 향상시키는 문제
*/

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, n;
	string p, arr;

	cin >> T;
	while (T--) {
		cin >> p >> n >> arr;
		deque<int> dq;

		bool isReverse = true;
		bool error = false;

		int idx = 1;
		while (arr[idx] != '\0') {
			int x = 0;
			while (arr[idx] >= '0' && arr[idx] <= '9') {
				x *= 10;
				x += int(arr[idx] - '0');
				idx++;
			}
			if (x != 0) {
				dq.push_back(x);
			}
			idx++;
		}


		for (int k = 0; k < p.length(); k++) {
			if (p[k] == 'R') {
				isReverse = !isReverse;
			}
			else if (p[k] == 'D') {
				if (dq.empty()) {
					error = true;
					cout << "error" << "\n";
					break;
				}
				if (isReverse) {
					dq.pop_front();
				}
				else {
					dq.pop_back();
				}
			}
		}

		if (!error) {
			cout << "[";
		}
		while (!dq.empty()) {
			if (isReverse) {
				auto c = dq.front();
				dq.pop_front();
				cout << c;
			}
			else {
				auto c = dq.back();
				dq.pop_back();
				cout << c;
			}
			if (!dq.empty()) {
				cout << ",";
			}
		}
		if (!error) {
			cout << "]" << "\n";
		}
	}
}