line = input()
for i, c in enumerate(line):
    print(c if i == 0 else c if line[i-1] != c else '', end='')