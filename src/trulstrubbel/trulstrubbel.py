inp = input()
T, H = 0, 0
for c in inp:
    if c == 'T':
        T += 1
    elif c == 'H':
        H += 1
    if T-H >= 2 and T >= 11 or H-T >= 2 and H >= 11:
        T, H = 0, 0
print(f"{T}-{H}")