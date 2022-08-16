from itertools import combinations
N, M = map(int, input().split())
A = list(range(1, M+1))
for item in combinations(A, N):
  print(*item, sep=' ')