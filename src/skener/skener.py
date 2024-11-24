r, c, zr, zc = map(int, input().split())
for _ in range(r):
    row = input()
    for _ in range(zr):
        for c in row:
            print(c*zc, end='')
        print()