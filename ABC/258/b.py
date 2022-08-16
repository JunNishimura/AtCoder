N = int(input())
A = []
for _ in range(N):
  A.append(list(map(int, list(input()))))

ans = 0
for i in range(N):
  for j in range(N):
    for k in [-1, 0, 1]:
      for l in [-1, 0, 1]:
        if k == 0 and l == 0:
          continue
        t = str(A[i][j])
        for m in range(1, N):
          t += str(A[(i+k*m)%N][(j+l*m)%N])
        ans = max(ans, int(t))
print(ans)