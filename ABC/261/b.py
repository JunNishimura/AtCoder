N = int(input())
A = []
for i in range(N):
  k = input()
  A.append(k)
flag = True
for y in range(N-1):
  for x in range(y+1, N):
    a = A[y][x]
    b = A[x][y]
    if not ((a == 'W' and b == 'L') or (a == 'L' and b == 'W') or (a == 'D' and b == 'D')):
      flag = False
if flag:
  print('correct')
else:
  print('incorrect')