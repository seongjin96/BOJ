/*
���Ʈ ����
N��° ������ ���� ���� ������ ���ʴ�� �õ��ϴ� ����
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);

	int N;
	int count = 0;
	int title = 665;
	string number;
	cin >> N;

	while (++title) {
		number = to_string(title);

		if (number.find("666") != -1) {
			count++;
		}
		if (N == count) {
			cout << title << "\n";
			break;
		}
	}
}