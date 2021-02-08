/*
DFS客 BFS
DFS客 BFS甫 促风绰 巩力
*/

#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int N, M, V;
const int MAX = 1001;
bool visit[MAX];
int adjacent[MAX][MAX];
queue<int> q;

void DFS(int start) {
	cout << start << ' ';
	visit[start] = true;
	for (int i = 1; i <= N; i++) {
		if (adjacent[start][i] && !visit[i]) {
			visit[i] = true;
			DFS(i);
		}
	}
}

void BFS(int start) {
	memset(visit, false, sizeof(visit));
	visit[start] = true;
	q.push(start);

	while (!q.empty()) {
		start = q.front();
		q.pop();
		cout << start << ' ';
		for (int i = 1; i <= N; i++) {
			if (adjacent[start][i] && !visit[i]) {
				visit[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> V;
	int x, y;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		adjacent[x][y] = 1;
		adjacent[y][x] = 1;

	}

	visit[V] = 1;
	DFS(V);
	cout << "\n";
	BFS(V);

}