s = 0
for _ in range(int(input())):
    line = input().strip().split()
    n = int(line[2])
    s += n if line[1] == 'IN' else -n
print(s if s > 0 else 'NO STRAGGLERS')