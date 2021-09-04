"""
나무 자르기
이분 탐색을 응용하여 최솟값이나 최댓값을 찾는 문제3
"""

N, M = map(int, input().split())

trees = list(map(int, input().split()))

start = 0
end = max(trees)

while start <= end:
    mid = int((start + end) / 2)
    total = 0

    total = sum(tree - mid if tree - mid > 0 else 0 for tree in trees)

    if total >= M:
        start  = mid + 1
    else:
        end = mid - 1

print(end)