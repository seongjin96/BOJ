'''
단어 수학
'''

import sys

N = int(sys.stdin.readline())

dic = {}
for i in range(8):
  dic[i + 1] = []

for _ in range(N):
  str = sys.stdin.readline().rstrip()
  arr = dic.get(len(str))
