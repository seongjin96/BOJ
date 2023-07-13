'''
색종이
'''

import sys

N = int(sys.stdin.readline())

paper = 100
confetti = 10
visited = [[0] * paper for _ in range(paper)]
global width
width = 0

def draw_confetti(x1, y1):
  global width
  for i in range(confetti):
    for j in range(confetti):
      if visited[i + x1][j + y1] != 1:
        visited[i + x1][j + y1] = 1
        width = width + 1

for _ in range(N):
  x1, y1 = map(int, input().split())
  draw_confetti(x1, y1)

print(width)