'''
A -> B
A를 B로 바꾸는데 필요한 연산의 최솟값
'''

import sys

A,B = map(int, sys.stdin.readline().split())

answer = 1

while A < B:
    if B % 10 == 1:
        B = B // 10
    elif B % 2 == 0:
        B = B // 2
    else:
        break
    answer += 1

answer = -1 if A != B else answer
print(answer)