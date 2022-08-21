H, W = map(int,input().split())
G = []
for i in range(H):
  G.append(input())
cur = (0, 0)
v = []
while True:
  if cur in v:
    print(-1)
    exit()
  else:
    v.append(cur)
  i = cur[0]
  j = cur[1]
  m = G[i][j]
  if m == 'U' and i > 0:
    cur = (i-1, j)
  elif m == 'D' and i < H-1:
    cur = (i+1, j)
  elif m == 'L' and j > 0:
    cur = (i, j-1)
  elif m == 'R' and j < W-1:
    cur = (i, j+1)
  else:
    print(' '.join([str(i+1), str(j+1)]))
    exit()
