/*
����
���� ���� ������ ���İ��谡 �ٲ��� �ʴ� ���� �˰����� ���� ����(stable sort)�̶�� �մϴ�.
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