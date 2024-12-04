locations = dict()
for _ in range(int(input())):
    _, loc = input(), input()
    if loc in locations:
        locations[loc] += 1
    else:
        locations[loc] = 1

for loc in locations:
    print(loc, locations[loc])