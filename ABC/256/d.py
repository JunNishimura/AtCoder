N = int(input())
A = []
for _ in range(N):
  x, y = map(int, input().split())
  A.append((x, y))
A = sorted(A, key=lambda x: x[0])
X, Y = [], []
for i in range(len(A)):
  l, r = A[i]
  if (len(X)==0 or Y[-1] < l):
    X.append(l)
    Y.append(r)
  else:
    if r > Y[-1]:
      Y[-1] = r
for i in range(len(X)):
  print(X[i], Y[i])
