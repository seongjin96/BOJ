/*
동적 계획법1
가장 큰 연속합을 구하는 문제
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int dp[100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> num;
		arr[i] = num;
	}

	dp[1] = arr[1];
	int ans = dp[1];

	for (int i = 2; i <= n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		ans = max(ans, dp[i]);
	}

	cout << ans << "\n";
}