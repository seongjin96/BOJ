/*
DFS¿Í BFS
*/

#include <iostream>

using namespace std;

const int MAX = 1001;
int N, M;
int adjacent[MAX][MAX];
bool visited[MAX];

void DFS(int start) {
	visited[start] = true;
	for (int i = 1; i <= N; i++) {
		if (adjacent[start][i] == 1 && !visited[i]) {
			DFS(i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	int x, y;
	int cnt = 0;

	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		adjacent[x][y] = 1;
		adjacent[y][x] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			DFS(i);
			cnt++;
		}
	}
	cout << cnt;
}