# 도키도키 간식드리미
#
# 사람들은 현재 1열로 줄을 서있고, 맨 앞의 사람만 이동이 가능하다. 인규는 번호표 순서대로만 통과할 수 있는 라인을 만들어 두었다.
# 이 라인과 대기열의 맨 앞 사람 사이에는 한 사람씩 1열이 들어갈 수 있는 공간이 있다.
# 현재 대기열의 사람들은 이 공간으로 올 수 있지만 반대는 불가능하다. 승환이를 도와 프로그램을 완성하라.

import sys
from collections import deque

N = int(sys.stdin.readline())
arr = deque(list(map(int, sys.stdin.readline().split())))
stack = []
order_num = 1

while arr:
    if arr[0] == order_num:
        arr.popleft()
        order_num += 1
        continue
    if stack and stack[-1] == order_num:
        stack.pop()
        order_num += 1
    elif not stack or stack[-1] > arr[0]:
        stack.append(arr.popleft())
    else:
        break

if arr:
    print("Sad")
else:
    print("Nice")
