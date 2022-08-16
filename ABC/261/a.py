l1, r1, l2, r2 = map(int, input().split())
if l2 > l1:
  if r1 > r2:
    print(r2-l2)
  else:
    print(max(0, r1-l2))
else:
  if r2 > r1:
    print(r1-l1)
  else:
    print(max(0, r2-l1))
