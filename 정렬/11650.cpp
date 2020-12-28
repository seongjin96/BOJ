/*
정렬
좌표를 정렬하는 문제
*/

#include <iostream>
#include <set>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x, y;

	multiset<pair<int, int>> cs;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		cs.insert(pair<int, int>(x, y));
	}

	for (auto i = cs.begin(); i != cs.end(); i++) {
		cout << i->first << " " << i->second << "\n";
	}
}