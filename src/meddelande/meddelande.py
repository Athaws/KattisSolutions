n = int(input().split(' ')[0])

total = ''
for i in range(n):
    line = input()
    for j in line:
        if j.isalnum():
            total += j
print(total)