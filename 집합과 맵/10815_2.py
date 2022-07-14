'''
숫자 카드
카드의 집합을 만들어 특정 카드가 집합에 있는지 빠르게 찾는 문제

요소들을 확인하는 문제 => '이진탐색'
요소가 엄청 작은 문제가 아닌 이상, 순차 탐색 대신 이진 탐색을 사용할 것
'''

import sys

N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
arr2 = list(map(int, sys.stdin.readline().split()))

arr.sort()

def binary_search(array, target, start, end):
  while start <= end:
    mid = (start + end) // 2
  
    if array[mid] == target:
      return mid
    elif array[mid] > target:
      end = mid - 1
    else:
      start = mid + 1
  return None

for i in range(len(arr2)):
  if binary_search(arr, arr2[i], 0, N - 1) is not None:
    print(1, end = ' ')
  else:
    print(0, end = ' ')