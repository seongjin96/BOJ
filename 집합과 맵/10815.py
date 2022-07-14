'''
숫자 카드
카드의 집합을 만들어 특정 카드가 집합에 있는지 빠르게 찾는 문제
'''

import sys

N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
arr2 = list(map(int, sys.stdin.readline().split()))

ans = []

for num in arr2:
  if num in arr:
    ans.append(1)
  else:
    ans.append(0)

for num in ans:
  print(num, end = ' ')