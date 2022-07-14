'''
문자열 집합
수 대신 문자열을 저장하는 문제
'''

import sys

N, M = map(int, sys.stdin.readline().split())

S = dict()
cnt = 0

for _ in range(N):
  S[sys.stdin.readline().rstrip()] = True

for _ in range(M):
  if sys.stdin.readline().rstrip() in S:
    cnt += 1
print(cnt)