c1, c2 = 0, 0
for i in input():
    if i in ['a', 'e', 'i', 'o', 'u']:
        c1 += 1
        c2 += 1
    if i == 'y':
        c2 += 1
print(c1, c2)