inp = input().split(" ")
friends, daysleft, today = int(inp[0]), int(inp[1]), int(inp[2])

count = 0
for i in range(friends):
    q_start = int(input())
    if q_start + 14 <= today+daysleft:
        count += 1
print(count)