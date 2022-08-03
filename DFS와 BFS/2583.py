'''
영역 구하기
'''

import sys
from collections import deque

M, N, K = map(int, sys.stdin.readline().split())

visited = [[0] * N for _ in range(M)]

for _ in range(K):
  x1, y1, x2, y2 = map(int, input().split())
  for i in range(y1, y2):
    for j in range(x1, x2):
      visited[i][j] = -1

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
answer = []


def bfs(y, x):
  queue = deque()
  queue.append((y, x))
  cnt = 1
  while queue:
    y, x = queue.popleft()
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]

      if 0 <= ny < M and 0 <= nx < N and visited[ny][nx] == 0:
        visited[ny][nx] = 1
        queue.append((ny, nx))
        cnt += 1
  return cnt

def dfs(y, x, cnt):
  visited[y][x] = 1
  for i in range(4):
    nx = x + dx[i]
    ny = y + dy[i]
    
    if 0 <= ny < M and 0 <= nx < N and visited[ny][nx] == 0:
      cnt = dfs(ny, nx, cnt + 1)
  return cnt

for y in range(M):
  for x in range(N):
    if visited[y][x] == 0:
      # visited[y][x] = 1
      # answer.append(bfs(y, x))
      answer.append(dfs(y, x, 1))

print(len(answer))
print(*sorted(answer))
