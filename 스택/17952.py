# 과제는 끝나지 않아!
#
# 성애는 이번 학기에 자기가 받을 과제 점수를 예상해보고 싶다.
# 하지만 과제 점수를 예상하는 지금도 과제가 추가되고 있기에 여유를 부릴 수가 없다.
# 여러분이 성애가 받을 과제 점수를 구해 주자!

import sys

N = int(sys.stdin.readline())


def solution(s):
    score = 0
    stack = []
    for i in range(s):
        data = list(map(int, sys.stdin.readline().split()))
        if data[0] == 1:
            stack.append([data[1], data[2]])
        if stack:
            stack[-1][1] -= 1
            if stack[-1][1] == 0:
                score += stack[-1][0]
                stack.pop()
    return score


print(solution(N))
