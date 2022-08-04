'''
적록색약
'''

import sys

N = int(sys.stdin.readline())
graph = [list(sys.stdin.readline().rstrip()) for _ in range(N)]
visited = [[0] * N for _ in range(N)]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

cnt = no_cnt = 0

def dfs(x, y):
  visited[x][y] = 1
  current_color = graph[x][y]

  for i in range(4):
    nx = x + dx[i]
    ny = y + dy[i]

    if 0 <= nx < N and 0 <= ny < N:
      if visited[nx][ny] == 0:
        if graph[nx][ny] == current_color:
          dfs(nx, ny)

for i in range(N):
  for j in range(N):
    if visited[i][j] == 0:
      dfs(i, j)
      cnt += 1

visited = [[0] * N for _ in range(N)]

for i in range(N):
  for j in range(N):
    if graph[i][j] == 'R':
      graph[i][j] = 'G'

for i in range(N):
  for j in range(N):
    if visited[i][j] == 0:
      dfs(i, j)
      no_cnt += 1

print(cnt, no_cnt)