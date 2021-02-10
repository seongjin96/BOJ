/*
DFS와 BFS
BFS로 토마토를 익히는 문제
*/

#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1000;
int adjacent[MAX][MAX] = { 0 };
int direct[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
queue<pair<int, int>> q;
int N, M;

void BFS() {
	pair<int, int> current;
	int nx = 0, ny = 0;

	while (!q.empty()) {
		current = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			nx = current.second + direct[i][0];
			ny = current.first + direct[i][1];
			if (nx >= 0 && nx < M && ny >= 0 && ny < N && adjacent[ny][nx] == 0) {
				adjacent[ny][nx] = adjacent[current.first][current.second] + 1;
				q.push({ ny,nx });
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;
	int x;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> x;
			adjacent[i][j] = x;
			if (adjacent[i][j] == 1)
				q.push({ i,j });
		}
	}

	BFS();

	int answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (adjacent[i][j] == 0) {
				cout << "-1";
				return 0;
			}
			if (answer < adjacent[i][j])
				answer = adjacent[i][j];
		}
	}
	cout << (answer - 1);
}