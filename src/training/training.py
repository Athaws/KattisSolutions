inp = input().split(' ')
n, s = int(inp[0]), int(inp[1])

for _ in range(n):
    line = input().split(' ')
    l, u = int(line[0]), int(line[1])
    if l <= s <= u:
        s += 1
print(s)