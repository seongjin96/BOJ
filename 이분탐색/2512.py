"""
예산
이분 탐색을 응용하여 최솟값이나 최댓값을 찾는 문제
"""

N = int(input())
budgets = list(map(int, input().split()))
M = int(input())

start = 0
end = max(budgets)

while start <= end:
    mid = int((start + end) / 2)
    total = 0

    total = sum(mid if budget - mid > 0 else budget for budget in budgets)

    if total <= M:
        start  = mid + 1
    else:
        end = mid - 1

print(end)