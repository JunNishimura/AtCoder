N, Q = map(int, input().split())
S = input()
d = 0
for _ in range(Q):
  t, x = map(int, input().split())
  if t == 1:
    d += x
  elif t == 2:
    print(S[(x-d-1)%N])