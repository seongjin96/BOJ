'''
안전 영역

DFS 활용 문제
'''

import sys
N = int(sys.stdin.readline())

heightArr = []

for i in range(N):
  arr = list(map(int, sys.stdin.readline().split()))
  heightArr.append(arr)
