h1, h2, h3, w1, w2, w3 = map(int, input().split())
ans = 0
h = [h1, h2, h3]
w = [w1, w2, w3]
a = [[0, 0, 0] for _ in range(3)]

def dfs(ij):
  global ans
  i = ij // 3
  j = ij % 3
  if i == 3:
    ans += 1
    return
  if i == 2:
    x = w[j] - a[0][j] - a[1][j]
    if x <= 0:
      return
    a[i][j] = x
    dfs(ij+1)
  elif j == 2:
    x = h[i] - a[i][0] - a[i][1]
    if x <= 0:
      return
    a[i][j] = x
    dfs(ij+1)
  else:
    for x in range(1, 31):
      a[i][j] = x
      dfs(ij+1)
if sum(h) != sum(w):
  print(0)
else:
  dfs(0)
  print(ans)