import sys
input = sys.stdin.read

data = iter(input().splitlines())
while True:
    jack, jill = map(int, next(data).split())
    if jack == jill == 0:
        break
    jackCDs = [int(next(data)) for _ in range(jack)]
    jillCDs = [int(next(data)) for _ in range(jill)]

    i = j = count = 0
    while i < jack and j < jill:
        if jackCDs[i] == jillCDs[j]:
            count += 1
            i += 1
            j += 1
        elif jackCDs[i] < jillCDs[j]:
            i += 1
        else:
            j += 1
    print(count)