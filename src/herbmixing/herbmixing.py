g, r = map(int, input().split())
total = 0

while g > 0:
    if r > 0 and g > 0:
        total += 10
        r -= 1
        g -= 1
    elif g > 2:
        total += 10
        g -= 3
    elif g > 1:
        total += 3
        g -= 2
    elif g > 0:
        total += 1
        g -= 1
print(total)