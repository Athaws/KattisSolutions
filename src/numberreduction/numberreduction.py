n = int(input())
steps = 0
while True:
    if n <= 1:
        break
    if n % 2 == 0:
        n //= 2
    else:
        n = 3 * n + 1
    steps += 1
print(steps)