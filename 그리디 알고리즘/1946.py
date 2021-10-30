'''
신입사원
진영 주식회사가 이번 신규 사원 채용에서 선발할 수 있는 신입사원의 최대 인원수를 구하는 프로그램
'''

import sys

T = int(sys.stdin.readline())

for _ in range(T):
    N = int(sys.stdin.readline())
    list = []
    for _ in range(N):
        i,j = map(int,sys.stdin.readline().split())
        list.append((i,j))
    list.sort()
    
    answer = 0
    min = list[0][1]
    for rank in list:
        if rank[1] > min:
            continue
        else:
            min = rank[1]
            answer += 1

    print(answer)