'''
단어 수학

자리 수에 맞는 값을 부여한 후 정렬
'''

import sys

N = int(sys.stdin.readline())

dic = {}
answer = 0
max = 9

# 문자열을 담을 배열
strList = []

for _ in range(N):
  strList.append(sys.stdin.readline().rstrip())

for str in strList:
  # 제곱값(맨 뒤는 1의 자리이기 때문에 0제곱을 해야하므로 -1을 해준다)
  root = len(str) - 1
  for i in str:
    if i in dic:
      dic[i] += pow(10, root)
    else:
      dic[i] = pow(10, root)
    root -= 1

dic = sorted(dic.values(), reverse = True)

for num in dic:
  answer += num * max
  max -= 1

print(answer)