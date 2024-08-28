def sum_of_digits(n: int):
    s = 0
    while n != 0:
        s += n % 10
        n //= 10
    return s

l, d, x = int(input()), int(input()), int(input())

for i in range(l, d+1):
    if sum_of_digits(i) == x:
        print(i)
        break

for i in range(d+1, l-1, -1):
    if sum_of_digits(i) == x:
        print(i)
        break