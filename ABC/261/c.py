N = int(input())
ans = {}
for i in range(N):
  n = input()
  ans.setdefault(n, 0)
  ans[n] += 1
  if ans[n] == 1:
    print(n)
  else:
    print(n+'(%i)' % (ans[n]-1)) 