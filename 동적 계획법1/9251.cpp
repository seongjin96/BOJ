/*
동적 계획법1
LCS(Longest Common Subsequence)를 구하는 문제
*/

#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][1001];
char c1[1002];
char c2[1002];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> c1 + 1 >> c2 + 1;
	int i, j;
	for (i = 1; c1[i]; i++) {
		for (j = 1; c2[j]; j++) {
			dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (c1[i] == c2[j]) });
		}
	}
	cout << dp[i - 1][j - 1] << "\n";
}