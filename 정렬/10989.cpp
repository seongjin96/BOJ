/*
����(�������)
���� ������ �۴ٸ� ī���� ������ ����Ͽ� ���� ������ ������ �� �ֽ��ϴ�.
*/

#include<stdio.h>

int arr[10001];

int main() {

	int N;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		int idx = 0;
		scanf_s("%d", &idx);
		arr[idx]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
}