a = list(map(int, input().split()))
s = set(a)
if not len(set(a)) == 2:
  print('No')
else:
  b = s.pop()
  c = s.pop()
  if (a.count(b) == 2 and a.count(c) == 3) or (a.count(b) == 3 and a.count(c) == 2):
    print('Yes')
  else:
    print('No')
