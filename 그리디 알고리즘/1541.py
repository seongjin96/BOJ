'''
잃어버린 괄호
식의 값을 가능한 한 작게 만드는 문제
'''

import sys

str = sys.stdin.readline().split('-')
answer = 0
for num in str[0].split('+'):
    answer += int(num)
for exp in str[1:]:
    for num in exp.split('+'):
        answer -= int(num)

print(answer)