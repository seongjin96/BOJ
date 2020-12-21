/*
브루트 포스
모든 경우를 시도하여 N의 생성자를 구하는 문제
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	int N;
	cin >> N;
	int ans = 0;
	int sum = 0;
	int temp = 0;

	for (int i = 1; i <= N; i++) {
		sum = 0;
		temp = i;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum + i == N) {
			ans = i;
			break;
		}
	}
	cout << ans << "\n";
}