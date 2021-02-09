/*
DFS와 BFS
2차원 배열을 그래프로 표현해 BFS나 DFS로 순회하는 문제
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX = 25;
bool visited[MAX][MAX];
int adjacent[MAX][MAX];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int N;
int cnt = 0;
vector<int> v;

void DFS(int x, int y) {
	cnt++;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (adjacent[nx][ny] == 1 && !visited[nx][ny])
			DFS(nx, ny);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < N; j++) {
			adjacent[i][j] = temp[j] - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (adjacent[i][j] == 1 && !visited[i][j]) {
				cnt = 0;
				DFS(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}