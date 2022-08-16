N = int(input())
P = [0, 0] + list(map(int, input().split()))

cnt = 0
crr = N
while crr != 1:
  cnt += 1
  crr = P[crr]

print(cnt)