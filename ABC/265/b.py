N, M, T = map(int, input().split())
A = list(map(int, input().split()))
X, Y = [], []
for i in range(M):
  x, y = map(int, input().split())
  X.append(x)
  Y.append(y)
c = 0
flag = True
for i in range(N-1):
  T -= A[i]
  if c < M and X[c]-1 == i:
    T += Y[c]
    c += 1
  if T <= 0:
    flag = False
if flag:
  print('Yes')
else:
  print('No')