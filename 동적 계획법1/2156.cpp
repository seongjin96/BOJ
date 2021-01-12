/*
���� ��ȹ��1
��Ģ�� ���� �����ָ� ���� ��, �ִ�� ���� �� �ִ� �������� ���� ���ϴ� ����
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];
int dp[10001];

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

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= N; i++) {
		dp[i] = max(dp[i - 1], max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]));
	}

	cout << dp[N] << "\n";

}