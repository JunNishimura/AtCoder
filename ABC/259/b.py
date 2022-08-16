import math
a, b, d = map(int, input().split())
d = d/180 * math.pi
x = math.cos(d)*a - math.sin(d)*b
y = math.sin(d)*a + math.cos(d)*b
print('{} {}'.format(x, y))