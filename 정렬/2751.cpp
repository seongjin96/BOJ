/*
����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N, number;

	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> number;
		v.push_back(number);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

}