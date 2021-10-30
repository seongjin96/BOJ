'''
큐, 덱
큐의 개념이 응용된 문제
'''

import sys

for _ in range(int(input())):
    N, M = map(int, sys.stdin.readline().split())
    q = list(map(int, sys.stdin.readline().split()))

    s = 0
    ans = max(q)

    while(True):
        M -= 1
        tmp = q.pop(0)
        if tmp != ans:
            q.append(tmp)
            if M == -1:
               M = len(q)-1

        else:
            s += 1
            if M == -1:
                break
            ans = max(q)

    print("%d"%s)