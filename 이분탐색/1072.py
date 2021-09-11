"""
게임
X와 Y가 주어졌을 때, 형택이가 게임을 최소 몇 번 더 해야 Z가 변하는지 구하는 프로그램을 작성하시오.
"""

import sys

X,Y = map(int, sys.stdin.readline().split())

start = 1
end = X
win = Y * 100 // X
answer = -1

while start <= end:
    mid = (start + end) // 2
    cur_win = (Y + mid) * 100 // (X + mid)

    if cur_win > win:
        answer = mid
        end = mid - 1
    else:
        start = mid + 1

print(answer)
