/*
���� ��ȹ��1
�Ǻ���ġ ���� ����� ��Ģ�� ã�� ���� ��ȹ������ Ǫ�� ����
*/

#include <iostream>
using namespace std;

long long dp[101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	dp[1] = 1;
	dp[2] = 1;

	while (T--) {
		int N;
		cin >> N;
		for (int i = 3; i <= N; i++) {
			dp[i] = dp[i - 3] + dp[i - 2];
		}
		cout << dp[N] << "\n";
	}
}