"""
대칭 차집합
"""

N, M = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

result = len(list(set(A)-set(B))) + len(list(set(B)-set(A))) 
print(result)