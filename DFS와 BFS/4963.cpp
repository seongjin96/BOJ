/*
DFS¿Í BFS
*/

#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 50;
int adjacent[MAX][MAX] = { 0 };
int direct[8][2] = { {-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1} };
bool visited[MAX][MAX];
int w, h;
int answer = 0;

void DFS(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + direct[i][0];
		int ny = y + direct[i][1];
		if (nx >= 0 && nx < h && ny >= 0 && ny < w && !visited[nx][ny] && adjacent[nx][ny] == 1) {
			DFS(nx, ny);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		int num;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> num;
				adjacent[i][j] = num;
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (adjacent[i][j] == 1 && !visited[i][j]) {
					DFS(i, j);
					answer++;
				}
			}
		}

		memset(visited, false, sizeof(visited));

		cout << answer << "\n";
		answer = 0;

	}
}