from collections import deque

S = input()
q = deque()
q.append(S)
m = {}
m[S] = 0

def swap(s, i, j):
  si = s[i]
  sj = s[j]
  return s.replace(si, 'x').replace(sj, si).replace('x', sj)

def search(m, s):
  for k, v in m.items():
    if k == s:
      return True
  return False

while len(q):
  cur = q.popleft()
  if cur == "atcoder":
    print(m[cur])
    exit()
  
  for i in range(1, 7):
    next = swap(cur, i, i-1)
    if not search(m, next):
      m[next] = m[cur] + 1
      q.append(next)
  