'''
영역 구하기
'''

import sys

M, N, K = map(int, sys.stdin.readline().split())

visited = [[0] * N for _ in range(M)]
