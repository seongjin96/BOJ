/*
DFS와 BFS
BFS의 특징은 각 정점을 최단경로로 방문한다는 것입니다. 이 점을 활용해 최단거리를 구해 봅시다.
*/

#include <iostream>
#include <queue>
using namespace std;

const int MAX = 101;
int adjacent[MAX][MAX] = { 0 };
int direct[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };
queue <pair<int, int>> q;
int N, M;

void BFS() {
	q.push(make_pair(0, 0));
	pair<int, int> current;
	int nx = 0, ny = 0;

	while (!q.empty()) {
		current = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			nx = current.second + direct[i][0];
			ny = current.first + direct[i][1];
			if (0 <= nx && nx < M && 0 <= ny && ny < N && adjacent[ny][nx] == 1) {
				q.push(make_pair(ny, nx));
				adjacent[ny][nx] = adjacent[current.first][current.second] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < M; j++) {
			adjacent[i][j] = temp[j] - '0';
		}
	}
	BFS();

	cout << adjacent[N - 1][M - 1];

}