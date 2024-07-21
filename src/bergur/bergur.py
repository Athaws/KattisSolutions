n, hrs = int(input()), [int(x) for x in input().split()]

sum = 0
while True:
    nxt = hrs.index(min(hrs)) + 1
    sum += min(hrs[:nxt+1])*nxt
    hrs = hrs[nxt:]
    if not hrs:
        break
print(sum)