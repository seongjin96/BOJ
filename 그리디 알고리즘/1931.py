'''
회의실 배정
가능한 한 많은 구간을 선택하는 문제
'''

import sys

N = int(sys.stdin.readline())

room = []

for _ in range(N):
    s, e = map(int, sys.stdin.readline().split())
    room.append((s,e))

room.sort(key=lambda x:(x[1],x[0]))
answer = 1
end_time = room[0][1]
for i in range(1, len(room)):
    if room[i][0] < end_time:
        continue
    else:
        answer += 1
        end_time = room[i][1]

print(answer)