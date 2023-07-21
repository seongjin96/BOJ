'''
트리의 부모 찾기
'''

from collections import defaultdict
import sys
sys.setrecursionlimit(10**6)

N = int(sys.stdin.readline())
visited = [0 for _ in range(N + 1)]
graph = defaultdict(list)

for _ in range(1, N):
    node1, node2 = map(int, sys.stdin.readline().split())
    graph[node1].append(node2)
    graph[node2].append(node1)

def dfs(s):
    for i in graph[s]:
        if visited[i] == 0 :
            visited[i] = s
            dfs(i)

dfs(1)

for i in range(2, len(visited)):
    print(visited[i])