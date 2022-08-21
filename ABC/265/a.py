X, Y, N = map(int, input().split())
print(min((N // 3) * Y + (N - N//3*3) * X, N*X))