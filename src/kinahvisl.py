first, last, count = input(), input(), 1

for a, b in zip(first, last):
    if a != b:
        count += 1

print(count)