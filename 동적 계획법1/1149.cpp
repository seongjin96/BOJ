/*
���� ��ȹ��1
i��° ���� ������ ������ ĥ�� ��, 1~i��° ���� ��� ĥ�ϴ� �ּ� ������� �κй����� �����غ��ô�.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int dp[3][1001];
int RGB[3][1001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, R, G, B;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> R >> G >> B;
		RGB[0][i] = R;
		RGB[1][i] = G;
		RGB[2][i] = B;
	}

	dp[0][0] = RGB[0][0];
	dp[1][0] = RGB[1][0];
	dp[2][0] = RGB[2][0];

	for (int i = 1; i < N; i++) {
		dp[0][i] = min({ dp[1][i - 1], dp[2][i - 1] }) + RGB[0][i];
		dp[1][i] = min({ dp[0][i - 1], dp[2][i - 1] }) + RGB[1][i];
		dp[2][i] = min({ dp[0][i - 1], dp[1][i - 1] }) + RGB[2][i];
	}

	cout << min({ dp[0][N - 1], dp[1][N - 1], dp[2][N - 1] }) << "\n";

}