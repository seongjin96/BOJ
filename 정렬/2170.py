"""
선 긋기

매우 큰 도화지에 자를 대고 선을 그으려고 한다. 선을 그을 때에는 자의 한 점에서 다른 한 점까지 긋게 된다. 
선을 그을 때에는 이미 선이 있는 위치에 겹쳐서 그릴 수도 있는데, 여러 번 그은 곳과 한 번 그은 곳의 차이를 구별할 수 없다고 하자.
이와 같은 식으로 선을 그었을 때, 그려진 선(들)의 총 길이를 구하는 프로그램을 작성하시오. 선이 여러 번 그려진 곳은 한 번씩만 계산한다.
"""

import sys

N = int(sys.stdin.readline())
lines = []

for _ in range(N):
    s, n = map(int, sys.stdin.readline().split())
    lines.append((s,n))

lines.sort()
answer = 0
bs = bE = 0

for s, e in lines:
    if not answer:
        answer = abs(e - s)
        bs = s
        bE = e
        continue

    if bs <= s and bE >= e:
        continue

    answer += abs(e - s)

    if bE > s:
        answer -= abs(bE - s)

    bS = s
    bE = e

print(answer)