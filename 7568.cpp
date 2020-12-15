/*
브루트 포스
모든 사람을 비교하여 덩치 등수를 구하는 문제
*/

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	int N, x, y;
	cin >> N;

	int height_arr[50] = { 0 };
	int weight_arr[50] = { 0 };
	int rank[50] = { 0 };

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		height_arr[i] = x;
		weight_arr[i] = y;
	}

	for (int j = 0; j < N; j++) {
		int cnt = 1;
		for (int k = 0; k < N; k++) {
			if (j != k) {
				if (height_arr[k] > height_arr[j] && weight_arr[k] > weight_arr[j]) {
					cnt++;
				}
			}
		}
		rank[j] = cnt;
	}

	for (int num = 0; num < N; num++) {
		cout << rank[num] << " ";
	}

}