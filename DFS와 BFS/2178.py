'''
미로탐색
'''
from collections import deque

N, M = map(int, input().split())
maze = [list(map(int, input())) for _ in range(N)]

visited = [[0] * M for _ in range(N)]

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

def bfs(x, y, cnt):
    queue = deque()
    queue.append((x, y, cnt))

    while queue:
      x, y, cnt = queue.popleft()

      if x == M - 1 and y == N - 1:
        return cnt + 1
    
      for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if nx < 0 or nx >= M or ny < 0 or ny >= N:
          continue
        if (visited[ny][nx] == 1):
           continue
        if (maze[ny][nx] == 1):
            queue.append((nx, ny, cnt + 1))
            visited[ny][nx] = 1


print(bfs(0, 0, 0))