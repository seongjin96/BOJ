/*
정렬(계수정렬)
수의 범위가 작다면 카운팅 정렬을 사용하여 더욱 빠르게 정렬할 수 있습니다.
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