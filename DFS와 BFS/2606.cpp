/*
DFS와 BFS
BFS나 DFS로 그래프를 순회해서 방문할 수 있는 정점을 찾는 문제
*/

#include <iostream>
using namespace std;

const int MAX = 101;
bool visited[MAX];
int adjacent[MAX][MAX];
int N, M;
int answer = 0;

void DFS(int start) {
	visited[start] = true;
	for (int i = 1; i <= N; i++) {
		if (adjacent[start][i] && !visited[i]) {
			visited[i] = true;
			answer++;
			DFS(i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		adjacent[x][y] = adjacent[y][x] = 1;
	}

	DFS(1);
	cout << answer;
}