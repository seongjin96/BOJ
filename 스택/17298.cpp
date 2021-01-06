/*
스택
스택으로 풀 수 있는 꽤 어려운 문제
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	cin >> N;
	stack<int> s;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	vector<int> NGE(v.size(), -1);

	for (int i = 0; i < v.size(); i++) {
		while (!s.empty() && v[s.top()] < v[i]) {
			NGE[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i : NGE) {
		cout << i << " ";
	}

}