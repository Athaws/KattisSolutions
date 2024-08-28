x, y = map(int, input().split())
counters = [0]*y
for _ in range(x):
    line = input()
    for i, ch in enumerate(line):
        if ch == 'S':
            counters[i] += 1
for i in range(x, 0, -1):
    line = ''
    for j in range(y):
        line += 'S' if i <= counters[j] else '.'
    print(line)