n, toktikkers = int(input()), dict()

for _ in range(n):
    inp = input().split()
    toktikkers.update({inp[0]: int(inp[1]) + toktikkers.get(inp[0], 0)})

print(max(toktikkers, key=toktikkers.get))