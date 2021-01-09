/*
동적 계획법1
점화식의 값을 특정 상수로 나눈 나머지를 구하는 문제
*/

#include <iostream>
using namespace std;

#define MAX 1000001
int arr[MAX];
int N;

int cal() {
	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= N; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
	}
	return arr[N];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cout << cal() << "\n";

}