N, M = map(int, input().split())
X = list(map(int, input().split()))
Y = []
dp = []
for i in range(M):
  c, y = map(int, input().split())
  Y.append((c, y))
for i in range(N):
  x = X[i]
  
