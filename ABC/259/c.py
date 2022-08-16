S = input()
T = input()

def p(X):
  ps = []
  cnt = 1
  for i in range(len(X)):
    if i == 0:
      continue
    if X[i] == X[i-1]:
      cnt += 1
      if i == len(X)-1:
        ps.append((X[i-1], cnt))
    else:
      ps.append((X[i-1], cnt))
      cnt = 1
      if i == len(X)-1:
        ps.append((X[i], 1))
  return ps

def out():
  print('No')
  exit()

if S == T:
  print('Yes')
else:
  ss = p(S)
  ts = p(T)
  if len(ss) != len(ts):
    out()
  for i in range(len(ts)):
    if ts[i][0] != ss[i][0]:
      out()
    if not (ts[i][1] == ss[i][1] or (ss[i][1] < ts[i][1] and ss[i][1] > 1)):
      out()
  print('Yes')