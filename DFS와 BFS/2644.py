'''
촌수계산
'''

import sys

N = int(sys.stdin.readline())
x, y = map(int, sys.stdin.readline().split())
M = int(sys.stdin.readline())
visited = [False] * (N + 1)
graph = [[] for _ in range(N + 1)]
answer = [0] * (N + 1)


for _ in range(M):
    node1, node2 = map(int, sys.stdin.readline().split())
    graph[node1].append(node2)
    graph[node2].append(node1)

def dfs(s):
    visited[s] = True
    for i in graph[s]:
        if not visited[i]:
            answer[i] = answer[s] + 1
            dfs(i)

dfs(x)

if answer[y] > 0:
    print(answer[y])
else:
    print(-1)
