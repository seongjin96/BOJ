/*
동적 계획법1
각 층의 모든 칸마다 최댓값을 저장하면서 동적 계획법으로 푸는 문제
*/

#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> num;
			if (j > 0 || j < i) {
				dp[i][j] = max({ dp[i - 1][j - 1] + num, dp[i - 1][j] + num });
			}
			else {
				dp[i][j] = dp[i - 1][j] + num;
			}
		}
	}

	int max = dp[n - 1][0];

	for (int i = 1; i < n; i++) {
		if (max < dp[n - 1][i]) {
			max = dp[n - 1][i];
		}
	}
	cout << max << "\n";
}