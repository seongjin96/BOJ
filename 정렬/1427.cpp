/*
정렬
숫자를 정렬하는 문제
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
	return j < i;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<int> v;

	cin >> N;

	while (N > 0) {
		v.push_back(N % 10);
		N /= 10;
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}

}