/*
동적 계획법1
LIS 응용 문제 1
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];
int dpr[1001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> num;
		arr[i] = num;
	}

	for (int i = 1; i <= N; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	for (int i = N; i >= 1; i--) {
		dpr[i] = 1;
		for (int j = N; j >= i; j--) {
			if (arr[i] > arr[j]) {
				dpr[i] = max(dpr[i], dpr[j] + 1);
			}
		}
	}

	int ans = dp[1] + dpr[1] - 1;

	for (int i = 2; i <= N; i++) {
		if (ans < (dp[i] + dpr[i] - 1))
			ans = dp[i] + dpr[i] - 1;
	}

	cout << ans << "\n";
}