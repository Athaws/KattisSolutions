inp = input().split(";")
count = 0
for i in range(len(inp)):
    count += 1
    if inp[i].isdigit():
        pass
    else:
        tmp = inp[i].split("-")
        count += int(tmp[1]) - int(tmp[0])
print(count)