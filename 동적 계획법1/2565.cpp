/*
동적 계획법1
LIS 응용 문제 2
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>>v;
int dp[501];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x, y;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		cnt = max(cnt, dp[i]);
	}

	cout << N - cnt << "\n";
}