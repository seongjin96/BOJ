/*
DFS와 BFS
땅의 모습이 아니라 배추의 위치가 주어지는 문제
*/

#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 50;
int adjacent[MAX][MAX];
int visited[MAX][MAX];
int T, N, M, K;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };
int answer[MAX] = { 0 };

void DFS(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		if (adjacent[nx][ny] == 1 && !visited[nx][ny]) {
			DFS(nx, ny);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> T;

	for (int i = 0; i < T; i++) {
		int x, y;
		cin >> N >> M >> K;
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			adjacent[x][y] = 1;
		}
		for (int k = 0; k < N; k++) {
			for (int h = 0; h < M; h++) {
				if (adjacent[k][h] == 1 && !visited[k][h]) {
					DFS(k, h);
					answer[i]++;
				}
			}
		}
		memset(visited, false, sizeof(visited));
		memset(adjacent, 0, sizeof(adjacent));
	}

	for (int i = 0; i < T; i++) {
		cout << answer[i] << "\n";
	}
}