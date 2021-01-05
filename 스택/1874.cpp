/*
스택
스택을 활용하는 문제
*/

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

#define MAX 100001

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num, idx = 0, i = 1;

	int num_arr[MAX];
	stack<int> s1, s2;
	vector<char> v;

	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> num;
		num_arr[i] = num;
	}

	while (idx != N) {
		if (s1.empty() || s1.top() < num_arr[idx]) {
			s1.push(i);
			v.push_back('+');
			i++;
		}
		if (s1.top() > num_arr[idx]) {
			cout << "NO" << "\n";
			return 0;
		}
		if (s1.top() == num_arr[idx]) {
			s1.pop();
			v.push_back('-');
			idx++;
		}
	}
	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << "\n";
	}
}