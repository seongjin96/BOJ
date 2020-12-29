/*
정렬
단어의 순서를 정의하여 정렬하는 문제
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string word;
	map <string, int> str;
	vector<pair<int, string>> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word;
		str.insert(make_pair(word, word.length()));
	}

	for (auto it = str.begin(); it != str.end(); it++) {
		v.push_back({ it->second, it->first });
	}

	sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i.second << "\n";
	}
}