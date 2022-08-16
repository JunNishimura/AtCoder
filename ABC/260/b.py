N, X, Y, Z = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = []
for i in range(N):
  C.append(A[i]+B[i])
for i in range(N):
  A[i] = (i+1, A[i])
  B[i] = (i+1, B[i])
  C[i] = (i+1, C[i])
A = sorted(A, key=lambda x: x[1], reverse=True)
B = sorted(B, key=lambda x: x[1], reverse=True)
C = sorted(C, key=lambda x: x[1], reverse=True)
ans = []
for i in range(X):
  ans.append(A[i][0])
i = 0
while Y > 0:
  b = B[i][0]
  if b not in ans:
    ans.append(b)
    Y -= 1
  i += 1
i = 0
while Z > 0:
  c = C[i][0]
  if c not in ans:
    ans.append(c)
    Z -= 1
  i += 1
ans = sorted(ans)
for i in ans:
  print(i)