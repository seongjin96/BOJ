/*
동적 계획법1
재귀 호출만 생각하면 신이 난다! 아닌가요?
*/

#include <iostream>
#include <string.h>
using namespace std;

int dp[55][55][55];
int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	int& ret = dp[a][b][c];
	if (ret != -1)
		return ret;
	if (a > 20 || b > 20 || c > 20)
		return ret = w(20, 20, 20);
	if (a < b && b < c)
		return ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	return ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	memset(dp, -1, sizeof(dp));
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
	}

}