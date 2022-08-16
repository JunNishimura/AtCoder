R, C = map(int, input().split())
if R % 2 == 0:
  if R >= 8:
    R = 16 - R
  if C % 2 == 1 and C > R / 2 + 1 and C < 15 - R / 2:
    print('white')
  elif C % 2 == 0:
    print('white')
  else:
    print('black')
else:
  if R >= 8:
    R = 16 - R
  if C % 2 == 0 and (C <= R // 2 + 1 or C >= 15 - R // 2):
    print('white')
  else:
    print('black')


