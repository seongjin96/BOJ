/*
정렬
정렬을 활용하는 문제
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num, mx = -1, mode = 0;
	double sum = 0;
	int arr[8001] = { 0 };
	vector<int> v, v_mode;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		sum += num;
		v.push_back(num);

		num = (num <= 0) ? abs(num) : (num + 4000);
		arr[num]++;
		if (arr[num] > mx) {
			mx = arr[num];
		}
	}

	for (int i = 0; i < 8001; i++) {
		if (arr[i] == mx) {
			mode = i;
			mode = (mode <= 4000) ? -mode : (mode - 4000);
			v_mode.push_back(mode);
		}
	}

	sort(v.begin(), v.end());
	sort(v_mode.begin(), v_mode.end());

	if (v_mode.size() == 1) {
		mode = v_mode[0];
	}
	else {
		mode = v_mode[1];
	}

	// 산술평균
	cout << (double)round(sum / N) << "\n";
	// 중앙값
	cout << v[(N / 2)] << "\n";
	// 최빈값
	cout << mode << "\n";
	// 범위
	cout << v.back() - v.front() << "\n";
}