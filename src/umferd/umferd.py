cells, lanes, empty = int(input()), int(input()), 0
for i in range(lanes):
    inp = input()
    for j in range(cells):
        if inp[j] == '.':
            empty += 1
print(f"{empty / (cells * lanes): .5f}")