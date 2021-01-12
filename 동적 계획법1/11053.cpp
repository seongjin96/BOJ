/*
동적 계획법1
LIS(Longest Increasing Subsequence)를 구하는 문제
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

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

	int cnt = 0;

	for (int i = 1; i <= N; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		cnt = max(cnt, dp[i]);
	}
	cout << cnt << "\n";
}