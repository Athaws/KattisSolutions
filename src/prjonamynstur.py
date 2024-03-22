n = int(input().split(' ')[0])

total = 0
for i in range(n):
    line = input()
    for j in line:
        if j == '.':
            total += 20
        elif j == 'O':
            total += 10
        elif j == '\\':
            total += 25
        elif j == '/':
            total += 25
        elif j == 'A':
            total += 35
        elif j == '^':
            total += 5
        elif j == 'v':
            total += 22
print(total)