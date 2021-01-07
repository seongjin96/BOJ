/*
동적 계획법1
단순 재귀로 피보나치 수를 구하면 왜 느릴까요? 함수 호출의 개수가 기하급수적으로 늘어나기 때문입니다.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;
int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (dp[n] != -1) return dp[n];
	dp[n] = fibonacci(n - 2) + fibonacci(n - 1);
	return dp[n];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;

	cin >> T;
	while (T--) {
		cin >> N;
		dp.resize(N + 1, -1);
		if (N == 0) {
			cout << "1" << " " << "0" << "\n";
		}
		else {
			cout << fibonacci(N - 1) << " " << fibonacci(N) << "\n";
		}
	}
}