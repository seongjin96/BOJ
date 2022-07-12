'''
좌표 압축
만약 정확한 값이 필요 없고 값의 대소 관계만 필요하다면, 모든 수를 0 이상 N 미만의 수로 바꿀 수 있습니다.
'''

import sys

N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
ans = [0] * N
dic = {}

for i in range(len(arr)):
  dic[i] = arr[i]

dic = sorted(dic.items(), key = lambda x : -x[1])

print(dic)

for i in range(N):
  cnt = 0