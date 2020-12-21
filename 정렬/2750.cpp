/*
정렬
시간 복잡도가 O(n²)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 삽입 정렬, 거품 정렬 등이 있습니다.
*/

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 1; j < v.size() - i; j++) {
			if (v[j - 1] > v[j])
				swap(v[j - 1], v[j]);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);

	int N, number;

	cin >> N;

	vector<int> v1;

	for (int i = 0; i < N; i++) {
		cin >> number;
		v1.push_back(number);
	}

	bubbleSort(v1);

	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j] << "\n";
	}

}