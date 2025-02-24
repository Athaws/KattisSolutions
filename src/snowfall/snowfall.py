depth = 0
for _ in range(int(input())):
    t, s = map(int, input().split())
    if not t:
        depth += s
    else:
        depth -= min(depth, s)
print(depth)