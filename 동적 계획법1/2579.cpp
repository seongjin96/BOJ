/*
���� ��ȹ��1
i��° ��ܿ� ���� ��, �� ���� ������ ����� �ö������� ����Ͽ� �κй����� �����غ��ô�.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int dp[301];
int arr[301];

void cal(int n) {
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}
	cout << dp[n] << "\n";
}
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
	cal(N);
}