/*
if문
점이 어느 사분면에 있는지 알아내는 문제
*/

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int x, y;
	cin >> x;
	cin >> y;

	if (x > 0 && y > 0) {
		cout << 1;
	}
	else if (x < 0 && y > 0) {
		cout << 2;
	}
	else if (x < 0 && y < 0) {
		cout << 3;
	}
	else if (x > 0 && y < 0) {
		cout << 4;
	}
}