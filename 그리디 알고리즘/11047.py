'''
동전0
동전의 조건이 특별해서 동적 프로그래밍보다 빠르게 답을 찾을 수 있는 문제
'''

import sys

N,K = map(int, sys.stdin.readline().split())

coins = []
result = 0

for _ in range(N):
    coins.append(int(sys.stdin.readline()))

for coin in reversed(coins):
    if K == 0: break
    elif coin > K: continue
    else:
        result += (K // coin)
        K = (K  % coin)

print(result)