'''
ATM
기다리는 시간의 합을 최소화하는 문제
'''

import sys

N = int(sys.stdin.readline())
P = list(map(int,sys.stdin.readline().split()))
answer = 0
time = 0

P.sort()

for i in  P:
    time += i
    answer += time
print(answer)