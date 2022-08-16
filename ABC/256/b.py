from fileinput import nextfile


N = int(input())
A = list(map(int, input().split()))
ans = 0
field = [0, 0, 0, 0]

for x in A:
  next_field = [0, 0, 0, 0]
  field[0] = 1
  for i in range(4):
    if field[i] == 1:
      if i + x >= 4:
        ans += 1
      else:
        next_field[i + x] = 1
  field = next_field
print(ans)