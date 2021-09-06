"""
공유기 설치
가장 인접한 두 공유기 사이의 거리를 최대로 하는 프로그램을 작성하시오.
"""
import sys

N,C = map(int, input().split())

locations = [int(sys.stdin.readline()) for _ in range(N)]

locations.sort()

start = 1
end = locations[-1] - locations[0]
answer = 0

while start <= end:
    mid = (start + end) // 2
    value = locations[0]
    cnt = 1

    for i in range(1, N):
        if locations[i] >= value + mid:
            cnt += 1
            value = locations[i]
    
    if cnt >= C:
        start = mid + 1
        answer = mid
    else:
        end = mid - 1

print(answer)