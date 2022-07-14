'''
숫자 카드 2
각 카드의 개수를 찾는 문제
'''

import sys

N = int(sys.stdin.readline())
cardList = list(map(int, sys.stdin.readline().split()))

M = int(sys.stdin.readline())
checkList = list(map(int, sys.stdin.readline().split()))

cardDic = {}

for num in cardList:
  if cardDic.get(num) is not None:
    cardDic[num] += 1
  else:
    cardDic[num] = 1

for num in checkList:
  if cardDic.get(num) is not None:
    print(cardDic[num], end=' ') 
  else:
    print(0, end=' ')