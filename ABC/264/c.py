from itertools import combinations

h1, w1 = map(int, input().split())
a = []
for _ in range(h1):
  a.append(list(map(int, input().split())))
h2, w2 = map(int, input().split())
b = []
for _ in range(h2):
  b.append(list(map(int, input().split())))

if a == b:
  print('Yes')
else:
  for c_h in combinations(range(h1), h2):
    p_a = []
    for i in c_h:
      p_a.append(a[i])
    for c_w in combinations(range(w1), w2):
      p_b = []
      for i in range(h2):
        p_p_b = []
        for j in range(w1):
          if j in c_w:
            p_p_b.append(p_a[i][j])
        p_b.append(p_p_b)
      if p_b == b:
        print('Yes')
        exit()
print('No')