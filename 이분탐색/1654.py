"""
랜선 자르기
"""

N, M = map(int, input().split())

lens = [int(input()) for _ in range(N)]

start = 1
end = max(lens)

while start <= end:
    mid = int((start + end) / 2)
    cnt = 0
    
    for len in lens:
        cnt += int(len / mid)

    if cnt < M:
        end = mid - 1
    else:
        start = mid + 1

print(end)