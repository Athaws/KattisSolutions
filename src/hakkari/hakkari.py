lines, mines = int(input().split()[0]), list()
for i in range(lines):
    line = input().strip()
    for j, ch in enumerate(line):
        if ch == '*':
            mines.append(f"{i+1} {j+1}")
print(len(mines))
for mine in mines:
    print(mine)