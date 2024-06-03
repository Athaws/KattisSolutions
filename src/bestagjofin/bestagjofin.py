num_guests, coolest = int(input()), (None, -1)

for _ in range(num_guests):
    inp = input().split()
    name, num = inp[0], int(inp[1])
    if num > coolest[1]:
        coolest = (name, num)

print(coolest[0])