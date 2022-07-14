'''
나는야 포켓몬 마스터 이다솜
맵을 사용하여 이름과 수를 연결짓는 문제
'''

import sys

N,M = map(int, sys.stdin.readline().split())

dicAlpha = {}
dicNum = {}
ans = []

for i in range(N): 
  pocketmon = sys.stdin.readline().rstrip()
  dicAlpha[i + 1] = pocketmon
  dicNum[pocketmon] = i + 1

for _ in range(M):
  str = sys.stdin.readline().rstrip()
  if str.isdigit():
    ans.append(dicAlpha[int(str)])
  else:
    ans.append(dicNum[str])

for i in range(M):
  print(ans[i])