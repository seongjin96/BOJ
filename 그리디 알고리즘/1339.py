'''
단어 수학
'''

import sys

N = int(sys.stdin.readline())

dic = {}
for i in range(9):
  dic[i + 1] = []

strList = []
for _ in range(N):
  str = sys.stdin.readline().rstrip()
  strLen = len(str)
  for i in range(len(str)):
    dic[strLen].append(str[i])
    strLen -= 1


print(dic)
