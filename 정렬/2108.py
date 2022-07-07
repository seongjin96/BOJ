'''
통계학
정렬을 활용하는 문제
'''

import sys
from collections import Counter

N = int(sys.stdin.readline())

arr = []
sum = 0

center = int(N / 2)

for _ in range(N):
  num = int(sys.stdin.readline())
  sum += num
  arr.append(num)

arr.sort()

count = Counter(arr).most_common()
max_num = count[0][1]
count_arr = []
for num in count:
  if num[1] == max_num:
    count_arr.append(num[0])

if len(count_arr) > 1:
  max_num = count_arr[1]
else:
  max_num = count_arr[0]

print(round(sum / N))
print(arr[center])
print(max_num)
print(arr[-1] - arr[0])