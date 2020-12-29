/*
정렬
값이 같은 원소의 전후관계가 바뀌지 않는 정렬 알고리즘을 안정 정렬(stable sort)이라고 합니다.
*/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, age;
	string name;
	multimap <int, string> str;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		str.insert(make_pair(age, name));
	}

	for (auto it = str.begin(); it != str.end(); it++) {
		cout << it->first << " " << it->second << "\n";
	}

}