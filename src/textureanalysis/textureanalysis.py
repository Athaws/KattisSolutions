i = 1
while True:
    line = input().strip()
    if line == 'END':
        break
    counts, prev, curr = [], '', 0
    for ch in line:
        if ch == '.':
            curr += 1
        elif ch == '*':
            if prev != '': 
                counts.append(curr)
            curr = 0
        prev = ch
    print(i, 'EVEN' if len(counts) == 0 or len(counts) > 0 and min(counts) == max(counts) else 'NOT EVEN')
    i += 1