/*
���Ʈ ����
�� ���� ī�带 ���� ��� ��츦 ����ϴ� ����
*/

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N, M, num;
	int max = 0;
	cin >> N >> M;
	int arr[100];
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}
	for (int j = 0; j < N - 2; j++) {
		for (int k = j + 1; k < N - 1; k++) {
			for (int h = k + 1; h < N; h++) {
				int sum = arr[j] + arr[k] + arr[h];
				if (M - sum == 0) {
					max = sum;
					break;
				}
				else if (M - sum > 0 && sum > max) {
					max = sum;
				}
			}
		}
	}
	cout << max << "\n";
}