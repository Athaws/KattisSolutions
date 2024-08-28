names = [input() for _ in range(int(input()))]
if len(names) > 12:
    names[0], names[12] = names[12], names[0]
elif 12 % len(names) != 0:
    names[0], names[13 % len(names)-1] = names[13 % len(names)-1], names[0]
for name in names:
    print(name)