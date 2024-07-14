n = int(input())
debris_per_day = [int(x) for x in input().strip().split()]
min_debris, day = 10e9, -1

for i, debris in enumerate(debris_per_day):
    if debris < min_debris:
        min_debris = debris
        day = i

print(min(day, n))
