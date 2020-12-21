/*
브루트 포스
N번째 종말의 수가 나올 때까지 차례대로 시도하는 문제
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	int N;
	int count = 0;
	int title = 665;
	string number;
	cin >> N;

	while (++title) {
		number = to_string(title);

		if (number.find("666") != -1) {
			count++;
		}
		if (N == count) {
			cout << title << "\n";
			break;
		}
	}
}