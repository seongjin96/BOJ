'''
주유소
최소 비용으로 주유하여 일직선 도로를 달리는 문제
'''

import sys

N = int(sys.stdin.readline())
road = list(map(int, sys.stdin.readline().split()))
station = list(map(int, sys.stdin.readline().split()))

min = station[0]
answer = 0

for distance, price in zip(road, station):
    if price <= min:
        answer += distance * price
        min = price
    elif price > min:
        answer += distance * min

print(answer)