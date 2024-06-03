count = 1
print(count)
while count <= 99:
    count = int(input())
    count += min(3 - count % 3, 2)
    print(count)
    if count == 99: exit(0)