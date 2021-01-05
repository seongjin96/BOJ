/*
스택
위와 같은데 괄호의 종류가 다양해진 문제
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	stack<char> s;

	while (1) {
		getline(cin, str);
		if (str.length() == 1 && str[0] == '.')
			break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					s.push(str[i]);
				}
				else {
					s.pop();
				}
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					s.push(str[i]);
				}
				else {
					s.pop();
				}
			}
		}
		cout << (s.empty() ? "yes" : "no") << "\n";
		while (!s.empty()) {
			s.pop();
		}
	}
	return 0;
}